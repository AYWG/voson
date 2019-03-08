//joystick settings
#define FWD_THRESH_ADC2 12000
#define RVS_THRESH_ADC2 11000
#define RVS_THRESH_ADC1 6000 //threshold value from adc1; required for rvs speed mapping
#define FWD_MAX 12700         //max forward position adc value
#define RVS_MAX 3700          //max reverse position adc value

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
float ADCavg(unsigned char pin)
{
    unsigned int i;
    unsigned int sum = 0;
    unsigned int avg = 10;

    for (i = 0; i < avg; i++)
    {
        sum += ADC_at_Pin(pin);
    }

    return (float) sum / avg;
}

float round(float f)
{
    return floorf(f + 0.5);
}

unsigned char get_byte(unsigned int adc)
{
    float slope;
    // Ignore any spikes
    if (adc > FWD_MAX)
    {
        adc = FWD_MAX;
    }
    if (adc < RVS_MAX)
    {
        adc = RVS_MAX;
    }
    slope = 1.0 * (255) / (FWD_MAX - RVS_MAX);
    return round(slope * (adc - RVS_MAX));
}

float get_angle(void)
{
    float result;
    unsigned int vcos = ADC_at_Pin(QFP32_MUX_P1_4);
    unsigned int vsin = ADC_at_Pin(QFP32_MUX_P1_5);

    // printf("vcos: %f, vsin: %f\n", (float) vcos, (float) vsin);
    printf("byte: %u\n", get_byte(vsin));

    result = atan2f( (float) vsin,  (float) vcos) / 2;
    result = result * 180 / PI;
    return result;
}

//outputs relative speed according to the 2 adc values read from the magnetoresistor
int get_speed(void)
{
    float adc1 = ADCavg(QFP32_MUX_P1_4);
    float adc2 = ADCavg(QFP32_MUX_P1_5);
    int speed;

    printf("P1.4: %f    P1.5: %f\n", adc1, adc2);
    printf("adc1 - adc2: %f\n", adc1 - adc2);

    if (adc2 > RVS_THRESH_ADC2 && adc2 > FWD_THRESH_ADC2 && adc1 < RVS_THRESH_ADC1) //within zero speed range
        speed = 0;
    else if (adc2 <= FWD_THRESH_ADC2)
    { //map adc value from range to 0-100
        speed = 100 - ((adc2 - FWD_MAX) / (FWD_THRESH_ADC2 - FWD_MAX) * 100);
        if (speed > 100) //cap out at 100
            speed = 100;
    }
    else if (adc2 >= RVS_THRESH_ADC2)
    { //map adc value from range to -100-0
        speed = -((adc1 - RVS_THRESH_ADC1) / (RVS_MAX - RVS_THRESH_ADC1) * 100);
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

void magneto_enable(void)
{
    ENABLE = 0;
    InitADC();
    InitPinADC(1, 4);
    InitPinADC(1, 5);
}
