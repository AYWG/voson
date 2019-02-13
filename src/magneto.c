//joystick settings
#define FWD_THRESH_ADC2 12000
#define RVS_THRESH_ADC2 11000
#define RVS_THRESH_ADC1 6000 //threshold value from adc1; required for rvs speed mapping
#define FWD_MAX 8500         //max forward position adc value
#define RVS_MAX 10100        //max reverse position adc value

void InitADC(void)
{
    SFRPAGE = 0x00;
    ADC0CN1 = 0b_10_000_000;     //14-bit,  Right justified no shifting applied, perform and Accumulate 1 conversion.
    ADC0CF0 = 0b_11111_0_00;     // SYSCLK/32
    ADC0CF1 = 0b_0_0_011110;     // Same as default for now
    ADC0CN0 = 0b_0_0_0_0_0_00_0; // Same as default for now
    ADC0CF2 = 0b_0_01_11111;     // GND pin, Vref=VDD
    ADC0CN2 = 0b_0_000_0000;     // Same as default for now. ADC0 conversion initiated on write of 1 to ADBUSY.
    ADEN = 1;                    // Enable ADC
}

void InitPinADC(unsigned char portno, unsigned char pinno)
{
    unsigned char mask;

    mask = 1 << pinno;

    SFRPAGE = 0x20;
    switch (portno)
    {
    case 0:
        P0MDIN &= (~mask); // Set pin as analog input
        P0SKIP |= mask;    // Skip Crossbar decoding for this pin
        break;
    case 1:
        P1MDIN &= (~mask); // Set pin as analog input
        P1SKIP |= mask;    // Skip Crossbar decoding for this pin
        break;
    case 2:
        P2MDIN &= (~mask); // Set pin as analog input
        P2SKIP |= mask;    // Skip Crossbar decoding for this pin
        break;
    default:
        break;
    }
    SFRPAGE = 0x00;
}

unsigned int ADC_at_Pin(unsigned char pin)
{
    ADC0MX = pin; // Select input from pin
    ADBUSY = 1;   // Dummy conversion first to select new pin
    while (ADBUSY)
        ;       // Wait for dummy conversion to finish
    ADBUSY = 1; // Convert voltage at the pin
    while (ADBUSY)
        ; // Wait for conversion to complete
    return (ADC0);
}

//averge for the adc value
unsigned int ADCavg(unsigned char pin)
{
    unsigned int i;
    float sum = 0;
    unsigned int avg = 10;

    for (i = 0; i < avg; i++)
    {
        sum += ADC_at_Pin(pin);
    }

    return sum / avg;
}

//outputs relative speed according to the 2 adc values read from the magnetoresistor
int get_speed(void)
{
    unsigned int adc1 = ADCavg(QFP32_MUX_P1_4);
    unsigned int adc2 = ADCavg(QFP32_MUX_P1_5);
    int speed;

    printf("P1.4: %i    P1.5: %i\n", adc1, adc2);
    if (adc2 > RVS_THRESH_ADC2 && adc2 > FWD_THRESH_ADC2 && adc1 < RVS_THRESH_ADC1) //within zero speed range
        speed = 0;
    else if (adc2 <= FWD_THRESH_ADC2)
    { //map adc value from range to 0-100
        speed = 100 - (((float)adc2 - FWD_MAX) / (FWD_THRESH_ADC2 - FWD_MAX) * 100);
        if (speed > 100) //cap out at 100
            speed = 100;
    }
    else if (adc2 >= RVS_THRESH_ADC2)
    { //map adc value from range to -100-0
        speed = -(((float)adc1 - RVS_THRESH_ADC1) / (RVS_MAX - RVS_THRESH_ADC1) * 100);
        if (speed < -100) //cap out at -100
            speed = -100;
    }
    else
    {
        speed = 0; //something went wrong
        printf("speed calc fault!");
    }
    return speed;
}

void enable_magneto(void)
{
    ENABLE = 0;
    InitADC();
    InitPinADC(1, 4);
    InitPinADC(1, 5);
}
