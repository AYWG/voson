//joystick settings
#define FWD_THRESH_ADC2 12000
#define RVS_THRESH_ADC2 11000
#define RVS_THRESH_ADC1 6000 //threshold value from adc1; required for rvs speed mapping
#define FWD_MAX 12650        //max forward position adc value
#define RVS_MAX 3880         //max reverse position adc value
#define SPEED_MAX 40          // max 40 km/h
#define ERROR 35              // for the joystick's position

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

/* Get the current position of the joystick as a value b/w 0-255 (128 means stopped) */
unsigned char get_byte(unsigned int adc)
{
    float slope;
    unsigned char byte;
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
    byte = round(slope * (adc - RVS_MAX));
    if (byte <= 128 + ERROR && byte >= 128 - ERROR) {
        byte = 128;
    }
    return byte;
}

unsigned int get_speed(void)
{
    // - from roughly 128 to 255 -> 0 to 40
    // - from roughly 127 to 0 -> 0 to 40
    unsigned char speed;
    unsigned char magneto_data = get_byte(ADC_at_Pin(QFP32_MUX_P1_5));

    float slope;

    // Forward
    if (magneto_data > 128 + ERROR) {
        slope = 1.0 * (SPEED_MAX) / (128);
        speed = round(slope * (magneto_data - 128));
    }
    // Reverse
    else if (magneto_data < 128 - ERROR) {
        slope = 1.0 * (-SPEED_MAX) / (128);
        speed = round(slope * (magneto_data - 128));
    }
    // Everything near the middle is just 0
    else {
        speed = 0;
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
