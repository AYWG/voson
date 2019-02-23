////////////////////////////////////////////////////////////////////////////////
// Common Menu Stuff
////////////////////////////////////////////////////////////////////////////////
#define DOWN_ARROW_START_Y 18
#define CHILL_BAR_START_X 0
#define CHILL_BAR_START_Y 22
#define ECO_BAR_START_X CHILL_BAR_START_X
#define ECO_BAR_START_Y CHILL_BAR_START_Y
#define SPORT_BAR_START_X CHILL_BAR_START_X
#define SPORT_BAR_START_Y CHILL_BAR_START_Y
#define TRACK_BAR_START_X CHILL_BAR_START_X
#define TRACK_BAR_START_Y CHILL_BAR_START_Y
#define MENU_BAR_START_X 0
#define MENU_BAR_START_Y 20

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

void common_draw_menu_arrow(void)
{
    oled_draw(down_arrow, sizeof down_arrow, 52, DOWN_ARROW_START_Y, DOWN_ARROW_WIDTH);
}

void common_draw_chill_bar(void)
{
    oled_draw(chill_bar, sizeof chill_bar, CHILL_BAR_START_X, CHILL_BAR_START_Y, CHILL_BAR_WIDTH);
}

void common_draw_eco_bar(void)
{
    oled_draw(eco_bar, sizeof eco_bar, ECO_BAR_START_X, ECO_BAR_START_Y, ECO_BAR_WIDTH);
}

void common_draw_sport_bar(void)
{
    oled_draw(sport_bar, sizeof sport_bar, SPORT_BAR_START_X, SPORT_BAR_START_Y, SPORT_BAR_WIDTH);
}

void common_draw_track_bar(void)
{
    oled_draw(track_bar, sizeof track_bar, TRACK_BAR_START_X, TRACK_BAR_START_Y, TRACK_BAR_WIDTH);
}

void common_draw_menu_bar(void)
{
    oled_draw(menu_bar, sizeof menu_bar, MENU_BAR_START_X, MENU_BAR_START_Y, MENU_BAR_WIDTH);
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