////////////////////////////////////////////////////////////////////////////////
// Common Menu Stuff
////////////////////////////////////////////////////////////////////////////////
#define ECO_BAR_START_X 0
#define ECO_BAR_START_Y 18
#define MENU_BAR_START_X 0
#define MENU_BAR_START_Y 17

static
void draw_char(unsigned char c, unsigned int start_x, unsigned int start_y)
{
    oled_draw(
        fiveBySevenFontInfo.char_data + 5 * (c - fiveBySevenFontInfo.start_char),
        5,
        start_x,
        start_y,
        5
    );
}

// TODO: Handle other types (not just eco, assuming there are others??)
void common_draw_eco_bar(void)
{
    // oled_draw(eco_bar, sizeof eco_bar, ECO_BAR_START_X, ECO_BAR_START_Y);
}

void common_draw_menu_bar(void)
{
    // oled_draw(menu_bar, sizeof menu_bar, MENU_BAR_START_X, MENU_BAR_START_Y);
}

void common_draw_text(unsigned char *text, unsigned int start_x, unsigned int start_y)
{
    char c;
    int i;

    for (i = 0; text[i] != '\0'; i++) {
        c = text[i];
        if (c != ' ') {
            draw_char(c, start_x, start_y);
            start_x += 5;
        }
        else {
            start_x += fiveBySevenFontInfo.space_pixels;
        }
    }
}