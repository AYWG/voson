/* Bluetooth stuff */

void senddata(unsigned char c)
{
    SFRPAGE = 0x20;
    if (c == '\n')
    {
        while (!(SCON1 & 0x02))
            ;
        SCON1 &= ~0x02;
        SBUF1 = '\r';
    }
    while (!(SCON1 & 0x02))
        ;
    SCON1 &= ~0x02;
    SBUF1 = c;
    SFRPAGE = 0x00;
}

char receivedata(void)
{
    char c;
    SFRPAGE = 0x20;
    while (!(SCON1 & 0x01))
        ;
    SCON1 &= ~0x01;
    SCON1 &= 0b_0011_1111;
    c = SBUF1;
    SFRPAGE = 0x00;
    return (c);
}

void senddatatype(char dtype)
{
    senddata(dtype);
}

void sendmsg(char *msg)
{
    if (msg != NULL) {
        while (*msg != '\0') {
            senddata(*msg);
            msg++;
        }
    }
}

void receivemsg(char *buf, int len)
{
    int i;
    for (i = 0; i < len; i++) {
        buf[i] = receivedata();
    }
}