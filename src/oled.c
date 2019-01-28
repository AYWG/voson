const unsigned char settings[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x50, 0x90, 0x90, 0x10, 0x00,
    0xF0, 0x90, 0x90, 0x90, 0x00, 0x10, 0x10, 0xF0, 0x10, 0x10, 0x10, 0x10, 0xF0, 0x10, 0x10, 0x00,
    0xF0, 0x00, 0x00, 0xF0, 0x20, 0xC0, 0x00, 0xF0, 0xC0, 0x20, 0x10, 0x10, 0x90, 0x90, 0x00, 0x60,
    0x50, 0x90, 0x90, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00,
    0x07, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x07, 0x00, 0x01, 0x02, 0x07, 0x01, 0x02, 0x04, 0x04, 0x04, 0x07, 0x00, 0x04,
    0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xC0, 0x40, 0x40, 0x80, 0x00, 0x00, 0xC0, 0x80, 0x00, 0x40, 0x40, 0xC0, 0x40, 0x40, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0x40, 0x40, 0x80, 0x00, 0xC0, 0x40, 0x40, 0x40, 0x00, 0xC0, 0x40, 0x40,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x60, 0x60, 0x60,
    0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x12, 0x12, 0x0D, 0x10, 0x0E, 0x05, 0x04, 0x0F, 0x10, 0x00, 0x1F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x1F, 0x04, 0x04, 0x03, 0x00, 0x1F, 0x12, 0x12, 0x12, 0x00, 0x1F, 0x02, 0x06,
    0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x39, 0x70, 0x60, 0x60, 0x60,
    0x70, 0x39, 0x1F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x06, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xF8, 0x48, 0x48, 0xB0, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x48, 0x48, 0x48, 0x00,
    0x00, 0x00, 0xF8, 0x88, 0x88, 0x70, 0x00, 0x00, 0xF8, 0x48, 0x48, 0x48, 0x00, 0xF8, 0x48, 0xC8,
    0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0,
    0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF0, 0xE0, 0x00,
    0x00, 0x03, 0x02, 0x02, 0x01, 0x00, 0x03, 0x02, 0x02, 0x02, 0x00, 0x03, 0x02, 0x02, 0x02, 0x00,
    0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x00, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x3F, 0x01, 0x1E, 0x30, 0x0E, 0x01, 0x3F, 0x00, 0x3F, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00,
    0x3F, 0x00, 0x00, 0x00, 0x3F, 0x04, 0x0C, 0x33, 0x00, 0x3F, 0x00, 0x0E, 0x11, 0x20, 0x20, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
    0x1E, 0x1E, 0x00, 0x00, 0x1E, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1E, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xF8, 0x00, 0x00, 0xE0, 0x10, 0x08, 0x08, 0x08, 0x10, 0xE0, 0x00, 0x18, 0xE0, 0x80, 0x70,
    0x78, 0x80, 0xE0, 0x18, 0x00, 0x00, 0x00, 0xF8, 0x88, 0x88, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0x38, 0x1C, 0x0C, 0x0C, 0x0C,
    0x1C, 0x38, 0xF0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x00,
    0x00, 0x03, 0x02, 0x02, 0x02, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00,
    0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x0C,
    0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1C, 0x22, 0x41, 0x41, 0x41, 0x22, 0x1C, 0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C, 0x1C, 0x22,
    0x41, 0x41, 0x41, 0x22, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E, 0x3E, 0x41, 0x41, 0x41, 0x3E, 0x18,
    0x14, 0x12, 0x7F, 0x10, 0x41, 0x61, 0x51, 0x4E, 0x00, 0x0E, 0x51, 0x51, 0x31, 0x1E, 0x00, 0x00,
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
    0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x03, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xFF, 0xFF, 0x1F, 0xE7, 0xF7, 0xFB,
    0xFB, 0xFB, 0xFB, 0xF7, 0xFF, 0x1F, 0xE7, 0xF7, 0xFB, 0xFB, 0xFB, 0xF7, 0xE7, 0x1F, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x30, 0x37, 0x37, 0x37, 0x37, 0x37, 0x37, 0x3F, 0x3F, 0x3E, 0x39, 0x3B, 0x37,
    0x37, 0x37, 0x37, 0x3B, 0x3F, 0x3E, 0x39, 0x3B, 0x37, 0x37, 0x37, 0x3B, 0x39, 0x3E, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
    0x00, 0x00, 0x00, 0xE0, 0x60, 0x80, 0x00, 0x80, 0x60, 0xE0, 0x00, 0x20, 0xE0, 0x20, 0x00, 0xE0,
    0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x80, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0xC0, 0x20, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0xC0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x01, 0x06, 0x01, 0x00, 0x0F, 0x00, 0x08, 0x0F, 0x08, 0x00, 0x0F,
    0x08, 0x08, 0x08, 0x00, 0x0F, 0x01, 0x02, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08,
    0x07, 0x00, 0x00, 0x07, 0x08, 0x08, 0x07, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x0A, 0x09, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0E, 0x70, 0x80, 0x70, 0x0E, 0x00, 0xFE, 0x92, 0x92, 0x92, 0x82, 0x00, 0xFE,
    0x12, 0x32, 0x4C, 0x80, 0x00, 0x8C, 0x92, 0x92, 0x92, 0x62, 0x00, 0x82, 0xFE, 0x82, 0x00, 0x38,
    0x44, 0x82, 0x82, 0x82, 0x44, 0x38, 0x00, 0xFE, 0x04, 0x08, 0x10, 0x20, 0xFE, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x84, 0xFE, 0x80, 0x00, 0x00, 0xC0, 0x00, 0x7C, 0x82, 0x82, 0x7C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0x20, 0x20, 0xC0, 0x00, 0x00, 0x40, 0xE0, 0x00, 0x00, 0xC0, 0x20, 0x20,
    0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x20, 0x20,
    0xC0, 0x00, 0xC0, 0x20, 0x20, 0xC0, 0x00, 0xC0, 0x20, 0x20, 0xC0, 0x00, 0x00, 0x40, 0xE0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x07, 0x08, 0x08, 0x07, 0x00, 0x00, 0x08, 0x0F, 0x08, 0x00, 0x06, 0x09, 0x09,
    0x06, 0x00, 0x00, 0x0C, 0x00, 0x07, 0x09, 0x09, 0x06, 0x00, 0x00, 0x0C, 0x00, 0x07, 0x08, 0x08,
    0x07, 0x00, 0x07, 0x08, 0x08, 0x07, 0x00, 0x07, 0x08, 0x08, 0x07, 0x00, 0x00, 0x08, 0x0F, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x00, 0x1C, 0x22,
    0x41, 0x41, 0x41, 0x41, 0x00, 0x1C, 0x22, 0x41, 0x41, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00, 0x41,
    0x7F, 0x41, 0x00, 0x7F, 0x02, 0x04, 0x08, 0x10, 0x7F, 0x00, 0x7F, 0x09, 0x09, 0x09, 0x09, 0x00,
    0x1C, 0x22, 0x41, 0x41, 0x41, 0x22, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const unsigned char main[] = {
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

void init_oled()
{
    OLED_A0 = 0;    // We are transmitting commands
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
}

void clear_oled()
{
    int i = 0;
    int y = 0;
    int x = 0;
    int length = 128;
    int c = 0;
    for (i = 0; i < 64; i++)
    {
        OLED_A0 = 0;
        oled_write_16(0xB0, x);
        oled_write(y & 15);
        oled_write(0x010 | (y >> 4));
        OLED_A0 = 1;
        for (c = 0; c < length; c = c + 1)
        {
            oled_write(0x00);
        }
        OLED_A0 = 0;
        x = x + 1;
    }
}

// void draw_oled()
// {
//     int i = 0;
//     int x = 0;
//     int y = 0;
//     int length = 1;
//     int c = 0;
//     int sub_c = 0;
//     int ptr = 0;

//     for (y = 0; y <= 124; y = y + 4)
//     {
//         for (i = 0; i < 64; i++)
//         {
//             sub_c = 0;
//             oled_write_16(0xB0, x);
//             oled_write(y & 15);
//             oled_write(0x010 | (y >> 4));
//             OLED_A0 = 1;
//             for (c = 0; c < length; sub_c = sub_c + 2)
//             {

//                 if ((vsn1[i + (y * 16)] & (1 << sub_c)) >> sub_c == 1 && (vsn1[i + (y * 16)] & (1 << (sub_c + 1))) >> (sub_c + 1) == 1)
//                     oled_write(0xFF);
//                 else if ((vsn1[i + (y * 16)] & (1 << sub_c)) >> sub_c == 1 && (vsn1[i + (y * 16)] & (1 << (sub_c + 1))) >> (sub_c + 1) == 0)
//                     oled_write(0xF0);
//                 else if ((vsn1[i + (y * 16)] & (1 << sub_c)) >> sub_c == 0 && (vsn1[i + (y * 16)] & (1 << (sub_c + 1))) >> (sub_c + 1) == 1)
//                     oled_write(0x0F);
//                 else
//                     oled_write(0x00);
//                 if (sub_c >= 7)
//                 {
//                     c = c + 1;
//                     sub_c = 0;
//                 }
//             }
//             OLED_A0 = 0;
//             x = x + 1;
//         }
//     }
// }

void draw_oled(int ptr_x, int ptr_y, int size_x, int size_y, char *displ)
{
    int x, y;
    int length = 1;
    int c = 0;
    int sub_c = 0;

    for (y = ptr_y; y <= (size_y + ptr_y); y = y + 4)
    {
        for (x = ptr_x; x < (size_x + ptr_x); x++)
        {
            sub_c = 0;
            oled_write_16(0xB0, x);
            oled_write(y & 15);
            oled_write(0x010 | (y >> 4));
            OLED_A0 = 1;
            for (c = 0; c < length; sub_c = sub_c + 2)
            {

                if ((displ[(x - ptr_x) + ((y - ptr_y) * 16)] & (1 << sub_c)) >> sub_c == 1 && (displ[(x - ptr_x) + ((y - ptr_y) * 16)] & (1 << (sub_c + 1))) >> (sub_c + 1) == 1)
                    oled_write(0xFF);
                else if ((displ[(x - ptr_x) + ((y - ptr_y) * 16)] & (1 << sub_c)) >> sub_c == 1 && (displ[(x - ptr_x) + ((y - ptr_y) * 16)] & (1 << (sub_c + 1))) >> (sub_c + 1) == 0)
                    oled_write(0xF0);
                else if ((displ[(x - ptr_x) + ((y - ptr_y) * 16)] & (1 << sub_c)) >> sub_c == 0 && (displ[(x - ptr_x) + ((y - ptr_y) * 16)] & (1 << (sub_c + 1))) >> (sub_c + 1) == 1)
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
