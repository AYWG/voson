#define min(x, y) (((x) < (y)) ? (x) : (y))
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)       \
    (byte & 0x80 ? '1' : '0'),     \
        (byte & 0x40 ? '1' : '0'), \
        (byte & 0x20 ? '1' : '0'), \
        (byte & 0x10 ? '1' : '0'), \
        (byte & 0x08 ? '1' : '0'), \
        (byte & 0x04 ? '1' : '0'), \
        (byte & 0x02 ? '1' : '0'), \
        (byte & 0x01 ? '1' : '0')

// Uses Timer3 to delay <us> micro-seconds.
void Timer3us(unsigned char us)
{
    unsigned char i; // usec counter

    // The input for Timer 3 is selected as SYSCLK by setting T3ML (bit 6) of CKCON0:
    CKCON0 |= 0b_0100_0000;

    TMR3RL = (-(SYSCLK) / 1000000L); // Set Timer3 to overflow in 1us.
    TMR3 = TMR3RL;                   // Initialize Timer3 for first overflow

    TMR3CN0 = 0x04;          // Sart Timer3 and clear overflow flag
    for (i = 0; i < us; i++) // Count <us> overflows
    {
        while (!(TMR3CN0 & 0x80))
            ;               // Wait for overflow
        TMR3CN0 &= ~(0x80); // Clear overflow indicator
    }
    TMR3CN0 = 0; // Stop Timer3 and clear overflow flag
}

void waitms(unsigned int ms)
{
    unsigned int j;
    unsigned char k;
    for (j = 0; j < ms; j++)
        for (k = 0; k < 4; k++)
            Timer3us(250);
}

