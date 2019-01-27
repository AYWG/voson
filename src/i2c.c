void I2C_write (unsigned char output_data)
{
	SMB0DAT = output_data; // Put data into buffer
	SI = 0;
	while (!SI); // Wait until done with send
}

unsigned char I2C_read(void)
{
	unsigned char input_data;

	SI = 0;
	while (!SI); // Wait until we have data to read
	input_data = SMB0DAT; // Read the data

	return input_data;
}

void I2C_start(void)
{
	ACK = 1; 
	STA = 1;     // Send I2C start
	STO = 0;
	SI = 0;
	while (!SI); // Wait until start sent
	STA = 0;     // Reset I2C start
}

void I2C_stop(void)
{
	STO = 1;  	// Perform I2C stop
	SI = 0;	// Clear SI
}

void testi2c()
{
    unsigned int i = 0;

    unsigned int control = 0x00;

    I2C_start();
    I2C_write(0xAA);    //My address. as i'm not reading i don't need to or with 0x00000001
    I2C_write(control); // This is Command
    I2C_stop();

    waitms(1);

    I2C_start();
    I2C_write(0xAB);    //My address. as i'm not reading i don't need to or with 0x00000001
    I2C_write(control); // This is Command
    I2C_stop();

    waitms(1);

    I2C_start();
    I2C_write(0x44);    //My address. as i'm not reading i don't need to or with 0x00000001
    I2C_write(control); // This is Command
    I2C_stop();

    waitms(1);

    I2C_start();
    I2C_write(0x47);    //My address. as i'm not reading i don't need to or with 0x00000001
    I2C_write(control); // This is Command
    I2C_stop();

    waitms(1);

    I2C_start();
    I2C_write(0x46);    //My address. as i'm not reading i don't need to or with 0x00000001
    I2C_write(control); // This is Command
    I2C_stop();

    waitms(10);
}