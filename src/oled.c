#define DISPLAY_WIDTH 64
#define DISPLAY_HEIGHT 128
#define ORIGIN_X 0
#define ORIGIN_Y 0

const unsigned char menu_bar[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00};

const unsigned char main_menu[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xE0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x38, 0x1C, 0x0E, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0,
    0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0C, 0x0E, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0F, 0x0F, 0x0F, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80,
    0x00, 0xF0, 0x90, 0x90, 0x10, 0x00, 0xF0, 0x90, 0x90, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x90, 0x90, 0xE0, 0x00, 0xF0, 0x90, 0x90, 0x10,
    0x00, 0x60, 0x90, 0x90, 0x60, 0x80, 0x60, 0x90, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x04, 0x04, 0x03, 0x00, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x03, 0x00, 0x04, 0x04, 0x04, 0x03,
    0x00, 0x00, 0x00, 0x04, 0x03, 0x00, 0x03, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0,
    0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xF0, 0xFE, 0xFF, 0xFF, 0x0F, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x03, 0x07, 0x3F, 0xFF, 0xFE, 0xFC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0xFE, 0x3F, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x07, 0x3F, 0x7F, 0xFF, 0xFC, 0xF0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
    0xE0, 0xE0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0x7C,
    0x3E, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01,
    0x81, 0xC0, 0xF8, 0xFF, 0xFF, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3F, 0x3F, 0x3F, 0x3F, 0x3D, 0x3C, 0x3C,
    0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7C, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x3C, 0x3C, 0x3E, 0x1F,
    0x0F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFC, 0x80, 0xC0, 0x20, 0x00, 0x00, 0xE0, 0x20, 0x20, 0xC0, 0x20, 0x20,
    0xC0, 0x00, 0x00, 0x80, 0x70, 0x0C, 0xFC, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x02, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x0C, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04,
    0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x20, 0x30, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x03, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xFF, 0xFF, 0x1F, 0xE7, 0xF7, 0xFB,
    0xFB, 0xFB, 0xFB, 0xF7, 0xFF, 0x1F, 0xE7, 0xF7, 0xFB, 0xFB, 0xFB, 0xF7, 0xE7, 0x1F, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x30, 0x37, 0x37, 0x37, 0x37, 0x37, 0x37, 0x3F, 0x3F, 0x3E, 0x39, 0x3B, 0x37,
    0x37, 0x37, 0x37, 0x3B, 0x3F, 0x3E, 0x39, 0x3B, 0x37, 0x37, 0x37, 0x3B, 0x39, 0x3E, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
    0x00, 0x00, 0x00, 0x00, 0xC0, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00,
    0x00, 0xC0, 0x80, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x00, 0xC0,
    0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0xC0, 0x40, 0x40, 0x00, 0x80, 0x40,
    0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1F, 0x02, 0x06, 0x09, 0x10, 0x00, 0x18, 0x07, 0x04, 0x04, 0x07, 0x18,
    0x00, 0x1F, 0x00, 0x01, 0x02, 0x04, 0x1F, 0x00, 0x07, 0x08, 0x10, 0x12, 0x12, 0x1E, 0x00, 0x1F,
    0x12, 0x12, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x07, 0x08, 0x10,
    0x10, 0x10, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x12, 0x12, 0x12, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x88, 0x48, 0x30, 0x00, 0x08, 0x48, 0x48, 0xB0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x80,
    0xC0, 0x20, 0x00, 0x00, 0xE0, 0x20, 0x20, 0xC0, 0x20, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x00, 0x02, 0x02, 0x02, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
    0x00, 0x01, 0x02, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0x70, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E,
    0x70, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x90, 0x90, 0x60, 0x00, 0xF0, 0x90,
    0x90, 0x90, 0x00, 0xE0, 0x30, 0xC0, 0x00, 0xC0, 0x30, 0xE0, 0x00, 0xC0, 0x20, 0x10, 0x10, 0x10,
    0x20, 0xC0, 0x10, 0x10, 0xF0, 0x10, 0x10, 0x00, 0xF0, 0x90, 0x90, 0x90, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
    0xFE, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x81, 0x86, 0x00, 0x87, 0x84,
    0x84, 0x04, 0x00, 0x07, 0x80, 0x83, 0x06, 0x01, 0x80, 0x07, 0x00, 0x01, 0x02, 0x04, 0x04, 0x04,
    0x02, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x27, 0x24, 0x24, 0x1B, 0x20, 0x30,
    0x28, 0x27, 0x00, 0x07, 0x08, 0x38, 0x0F, 0x1E, 0x25, 0x24, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};


static unsigned char **oled_display;

static void oled_display_init()
{
    int i, j;
    oled_display = (unsigned char **) malloc(DISPLAY_HEIGHT * sizeof(unsigned char *));
    for (i = 0; i < DISPLAY_HEIGHT; i++) {
        oled_display[i] = (unsigned char *) malloc(DISPLAY_WIDTH * sizeof(unsigned char));
        for (j = 0; j < DISPLAY_WIDTH; j++) {
            array_at(oled_display, i, j) = 0x00;
        }
    }
}

void oled_enable_commands()
{
    OLED_A0 = 0;
}

void oled_enable_draw()
{
    OLED_A0 = 1;
}

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

void oled_set_cursor(unsigned int x, unsigned int y)
{
    oled_enable_commands();
    oled_write_16(0xB0, x);
    oled_write(y & 15);
    oled_write(0x010 | (y >> 4));
}

void oled_clear()
{
    unsigned int x, y;
    for (y = 0; y < DISPLAY_HEIGHT; y++)
    {
        for (x = 0; x < DISPLAY_WIDTH; x++)
        {
            oled_set_cursor(x, y);
            oled_enable_draw();
            oled_write(0x00);
        }
    }
}

void oled_fill()
{
    unsigned int x, y;
    for (y = 0; y < DISPLAY_HEIGHT; y++)
    {
        for (x = 0; x < DISPLAY_WIDTH; x++)
        {
            oled_set_cursor(x, y);
            oled_enable_draw();
            oled_write(0xFF);
        }
    }
}

void meme_draw()
{
    int x, y;
    for (y = 0; y < DISPLAY_HEIGHT / 4; y++) {
        for (x = 0; x < DISPLAY_WIDTH; x ++)
        {
            oled_set_cursor(x, y);
            oled_enable_draw();
            oled_write(main_menu[y * DISPLAY_WIDTH + x]);
        }
    }
    
}

/**
 * start_x : x coordinate to draw at
 * start_y : y coordinate to draw at
 * size_x  : width of image in x-coords
 * size_y  : height of image in y-coords
 * image   : an array of bytes representing the image
 */
void oled_draw(int start_x, int start_y, int size_x, int size_y, char *image)
{

    int x, y;
    int length = 1;
    int c = 0;
    int sub_c = 0;

    int x_max = min(start_x + size_x, DISPLAY_WIDTH);
    int y_max = min(start_y + size_y, DISPLAY_HEIGHT);

    for (y = start_y; y < y_max; y += 4)
    {
        for (x = start_x; x < x_max; x++)
        {
            sub_c = 0;
            oled_set_cursor(x, y);
            OLED_A0 = 1;
            for (c = 0; c < length; sub_c = sub_c + 2)
            {
                int displ_index = min((x - start_x) + ((y - start_y) * 16), size_x * size_y * 2 / 8 - 1);
                int foo = image[displ_index] & (1 << sub_c);
                int bar = image[displ_index] & (1 << (sub_c + 1));
                waitms(10);
                printf("ind: %d\n", displ_index);

                if (foo >> sub_c == 1 && bar >> (sub_c + 1) == 1)
                    oled_write(0xFF);
                else if (foo >> sub_c == 1 && bar >> (sub_c + 1) == 0)
                    oled_write(0xF0);
                else if (foo >> sub_c == 0 && bar >> (sub_c + 1) == 1)
                    oled_write(0x0F);
                else
                    oled_write(0x00);
                if (sub_c >= 7)
                {
                    c = c + 1;
                    sub_c = 0;
                }
            }
            OLED_A0 = 0;
        }
    }
}

void oled_draw2(char *image, int image_len)
{
    

}

void oled_draw_pixel(int pixel_x, int pixel_y, int is_white)
{
    int display_x = pixel_x;
    int display_y = pixel_y / 2;

    unsigned char mask = pixel_y % 2 == 0 ? 0xF0 : 0x0F;
    unsigned char other_mask = ~mask;
    unsigned char pixel_val = is_white ? 0xFF : 0x00;
    unsigned char current_screen_pixels = array_at(oled_display, display_y, display_x);
    oled_set_cursor(display_x, display_y);
    oled_enable_draw();

    if (is_white) {
        if (current_screen_pixels == 0x00) {
            array_at(oled_display, display_y, display_x) = pixel_val & mask;
            oled_write(pixel_val & mask);
        }
        else if ( (current_screen_pixels == 0x0F && mask == 0xF0) ||
                  (current_screen_pixels == 0xF0 && mask == 0x0F)   ) {
            array_at(oled_display, display_y, display_x) = pixel_val;
            oled_write(pixel_val);
        }
    }

    else {
        if (current_screen_pixels == 0xFF) {
            array_at(oled_display, display_y, display_x) = other_mask & 0xFF;
            oled_write(other_mask & 0xFF);
        }
        else if (current_screen_pixels == mask)
        {
            array_at(oled_display, display_y, display_x) = pixel_val;
            oled_write(pixel_val);
        }
    }
}

void update_menu(volatile int menu)
{
    // oled_clear();
    // switch (menu)
    // {
    // case 0:
    //     oled_draw(0, 0, 64, 124, main_menu);
    //     break;
    // case 1:
    //     oled_draw(0, 0, 64, 124, settings_menu);
    //     break;
    // }
}