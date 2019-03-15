char _c51_external_startup (void)
{
	// Disable Watchdog with key sequence
	SFRPAGE = 0x00;
	WDTCN = 0xDE; //First key
	WDTCN = 0xAD; //Second key
  
	VDM0CN=0x80;       // enable VDD monitor
	RSTSRC=0x02|0x04;  // Enable reset on missing clock detector and VDD

	#if (SYSCLK == 48000000L)	
		SFRPAGE = 0x10;
		PFE0CN  = 0x10; // SYSCLK < 50 MHz.
		SFRPAGE = 0x00;
	#elif (SYSCLK == 72000000L)
		SFRPAGE = 0x10;
		PFE0CN  = 0x20; // SYSCLK < 75 MHz.
		SFRPAGE = 0x00;
	#endif
	
	#if (SYSCLK == 12250000L)
		CLKSEL = 0x10;
		CLKSEL = 0x10;
		while ((CLKSEL & 0x80) == 0)
	#elif (SYSCLK == 24500000L)
		CLKSEL = 0x00;
		CLKSEL = 0x00;
		while ((CLKSEL & 0x80) == 0)
	#elif (SYSCLK == 48000000L)	
		// Before setting clock to 48 MHz, must transition to 24.5 MHz first
		CLKSEL = 0x00;
		CLKSEL = 0x00;
		while ((CLKSEL & 0x80) == 0)
		CLKSEL = 0x07;
		CLKSEL = 0x07;
		while ((CLKSEL & 0x80) == 0)
	#elif (SYSCLK == 72000000L)
		// Before setting clock to 72 MHz, must transition to 24.5 MHz first
		CLKSEL = 0x00;
		CLKSEL = 0x00;
		while ((CLKSEL & 0x80) == 0)
		CLKSEL = 0x03;
		CLKSEL = 0x03;
		while ((CLKSEL & 0x80) == 0)
	#else
		#error SYSCLK must be either 12250000L, 24500000L, 48000000L, or 72000000L
	#endif
	
	SFRPAGE = 0x00;
	P0MDOUT |= 0b0001_1101; // Enable UART0 TX as push-pull output
	P1MDOUT = 0b1000_0100;
	P2MDOUT = 0b0100_0001;

	// PRTDRV = 0b0000_0100;
	SFRPAGE = 0x20;
	P3MDOUT = 0b0000_1111;
	SFRPAGE = 0x00;
	//PCON1 = 0b0000_0001; // DO NOT TURN ON. WILL MAKE CHIP BRAINDEAD
	
	//P0MDOUT |= 0b0100_0000; // Enable UART0 TX as push-pull output
	XBR0     = 0x07; // Enable UART0 on P0.4(TX) and P0.5(RX)      and smb0 and spi0               
	XBR1     = 0b0000_0000;
	XBR2     = 0x41; // Enable crossbar and weak pull-ups
	P0SKIP = 0b0000_1000; // Skip first pin and then use the last two for the SS
	P1MDIN |= 0b_1100_0000; // ADC pins
	// P1SKIP |= 0b_0011_1000;

	// Configure Uart 0
	SCON0 = 0x10;
	CKCON0 |= 0b_0000_1000 ; // Timer 1 uses the system clock.
	TH1 = 0x100-((SYSCLK/BAUDRATE)/2L);
	TL1 = TH1;      // Init Timer1
	TMOD &= ~0xf0;  // TMOD: timer 1 in 8-bit auto-reload
	TMOD |=  0x20;                       
	TR1 = 1; // START Timer1
	TI = 1;  // Indicate TX0 ready
	
	// Configure SPI0
	SPI0CFG = 0b0100_0000; // not busy, master enable, first edge of clock, line in low idle
	SPI0CN0 = 0b0000_0001; // 3_wire mode and enable spi
	SPI0CKR =  (SYSCLK/(2*F_SCK_MAX))-1;; //48/(1*2)-1; // has to be between 0 and 255 
	
	// Configure I2C
	
		// Configure Timer 0 as the I2C clock source
	CKCON0 |= 0x04; // Timer0 clock source = SYSCLK
	TMOD &= 0xf0;  // Mask out timer 1 bits
	TMOD |= 0x02;  // Timer0 in 8-bit auto-reload mode
	// Timer 0 configured to overflow at 1/3 the rate defined by SMB_FREQUENCY
	TL0 = TH0 = (0x34 << TH1_TH1__SHIFT);
	TR0 = TCON_TR0__RUN; // Enable timer 0
	
	SMB0CF = 0b1101_0000;
	
	// Configure UART1

	SFRPAGE = 0x20;
	SMOD1 = 0x0C;
	SCON1 = 0x10;
	SBCON1 = 0x00;
	SBRL1 = 65527L;
	SCON1 |= 0x02;
	SBCON1 |= 0x40;
	SFRPAGE = 0x00;



	// EA=1;				// Global Interrupts
	// EIE2 = 0b0000_0100; // Timer 4 Interrupts
	// LFO0CN = 0b1100_1100; // Enable the low frequency clock 
	// SFRPAGE = 0x10;
	// TMR4RLH= 0b1111_1101; // set the 16 bit timer high reload value
	// TMR4RLL= 0b0000_1111; // set the 16 bit timer low reload value
	// TMR4H= 0b1111_1101; // set the 16 bit timer high value
	// TMR4L= 0b0000_1111; // set the 16 bit timer low value
	// TMR4CN0 = 0b0000_0011; // Turn off timer for now. 
	// SFRPAGE = 0x00;
	
	
	// Configure ADC

	return 0;
}