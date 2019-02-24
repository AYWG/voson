#define DISPLAY_WIDTH 64
#define DISPLAY_HEIGHT 128
#define ORIGIN_X 0
#define ORIGIN_Y 0

static unsigned char *oled_display;

static 
void oled_display_init(void)
{
    int i, j;
    oled_display = (unsigned char *) malloc(DISPLAY_HEIGHT / 4 * DISPLAY_WIDTH * sizeof(unsigned char *));
    for (i = 0; i < DISPLAY_HEIGHT / 4; i++) {
        for (j = 0; j < DISPLAY_WIDTH; j++) {
            oled_display[i * DISPLAY_WIDTH + j] = 0x00;
        }
    }
}

static
void oled_enable_commands(void)
{
    OLED_A0 = 0;
}

static
void oled_enable_draw(void)
{
    OLED_A0 = 1;
}

static 
void oled_write(unsigned char d)
{
    SFRPAGE = 0x00;
    OLED_SELECT = 0;
    SPI0DAT = d;
    while (!SPIF)
        ;
    SPIF = 0;
    Timer3us(5);
    OLED_SELECT = 1;
}

static 
void oled_write_16(unsigned char d1, unsigned char d2)
{
    SFRPAGE = 0x00;
    OLED_SELECT = 0;
    SPI0DAT = d1;
    while (!SPIF)
        ;
    SPIF = 0;

    SPI0DAT = d2;
    while (!SPIF)
        ;
    SPIF = 0;
    Timer3us(5);
    OLED_SELECT = 1;
}

///////////////////////////////////////////////////////////////////////////////////

void oled_init()
{
    oled_enable_commands();
    OLED_RESET = 1; // Set the reset pin high
    SPIF = 1;       // Pull SPI high to reset

    oled_write(0xAE);          // turn off the display
    oled_write(0x40);          // start the writes at the next two locations
    oled_write(0xA0);          // remap
    oled_write(0xC8);          // remap
    oled_write_16(0x81, 0x80); // set the contrast
    oled_write_16(0xA8, 0x3F); // 1/64 multiplex ratio
    oled_write_16(0xAD, 0x80); // disable built in dc-dc

    oled_write_16(0xD5, 0x50); // set internal clock speed
    oled_write_16(0xD3, 0x00); // display offset
    oled_write_16(0xD9, 0x22); // pixel driving capacitor pre-charge
    oled_write_16(0xDB, 0x35); // VCOM deselect
    oled_write_16(0xDC, 0x35); // capacitor output voltage
    oled_write(0x30);          // discharge level
    oled_write(0xAF);          // turn on the display

    oled_display_init();
}

void oled_display_print(unsigned int x, unsigned int y)
{
    printf("Byte at x = %u, y = %u : 0x%02X\n", x, y, oled_display[y * DISPLAY_WIDTH + x]);
}

void oled_set_cursor(unsigned int x, unsigned int y)
{
    oled_enable_commands();
    oled_write_16(0xB0, x);
    oled_write(y & 15);
    oled_write(0x010 | (y >> 4));
}

void oled_draw_pixel(unsigned int pixel_x, unsigned int pixel_y, int is_white)
{
    unsigned int display_x = pixel_x;
    unsigned int display_y = pixel_y / 8;

    unsigned int cursor_x = pixel_x;
    unsigned int cursor_y = pixel_y / 2;

    unsigned char mask = 0x80 >> (pixel_y % 8);
    unsigned char inv_mask = ~mask;

    unsigned char pixel_pair_mask, pixel_pair;

    oled_set_cursor(cursor_x, cursor_y);
    oled_enable_draw();

    // Update the stored display
    if (is_white) {
        oled_display[display_y * DISPLAY_WIDTH + display_x] |= mask;
    } else {
        oled_display[display_y * DISPLAY_WIDTH + display_x] &= inv_mask;
    }

    // Write to the visible screen
    // We have to write two pixels at a time, so extract the two pixels that will be affected.
    pixel_pair_mask = 0xC0 >> ( (pixel_y % 8) / 2 * 2);
    pixel_pair = oled_display[display_y * DISPLAY_WIDTH + display_x] & pixel_pair_mask;

    // Right shift to get the actual value of the pixel pair
    pixel_pair >>= (6 - ((pixel_y % 8) / 2 * 2));

    switch(pixel_pair) {
        case 0b00: 
            oled_write(0x00);
            break;
        case 0b01:
            oled_write(0x0F);
            break;
        case 0b10:
            oled_write(0xF0);
            break;
        case 0b11:
            oled_write(0xFF);
            break;
        default:
            printf("oled_draw_pixel - invalid pixel_pair: %lu\n", pixel_pair);
            break;
    }
}

/**
 * image     : an array of bytes representing the image
 * image_len : length of image
 * start_x   : x coordinate of oled_display to draw at (0-63)
 * start_y   : y coordinate of oled_display to draw at (0-31)
 * erase_en  : enable erase or not
 */
void oled_draw(const unsigned char *image, unsigned int image_len, 
               unsigned int start_x, unsigned int start_y, unsigned int page_width,
               bit erase_en)
{
    unsigned char mask = 0x80;
    unsigned char pixel;
    unsigned char byte;
    unsigned int page = start_y;
    unsigned int x = start_x;
    int y = 7;
    int i, j;
    int is_white;
    for (i = 0; i < image_len; i++)
    {
        byte = image[i];
        for (j = 0; j < 8; j++)
        {
            pixel = byte & (mask >> j);
            is_white = erase_en ? FALSE : pixel > 0;
            oled_draw_pixel(x, (page * 8) + y, is_white);
            y--;
            if (y < 0)
            {
                y = 7;
                x++;
                if ((x - start_x) >= page_width)
                {
                    x = start_x;
                    page++;
                }
            }
        }
    }
}

void oled_clear(void)
{
    unsigned int x, y;
    for (y = 0; y < 256; y++)
    {
        for (x = 0; x < 64; x++)
        {
            oled_draw_pixel(x, y, 0);
        }
    }
}

