////////////////////////////////////////////////////////////////////////////////
// Main Menu
////////////////////////////////////////////////////////////////////////////////
#define SPEED_TENS_DIGIT_ORIGIN_X 15
#define SPEED_TENS_DIGIT_ORIGIN_Y 8
#define SPEED_ONES_DIGIT_ORIGIN_X 35
#define SPEED_ONES_DIGIT_ORIGIN_Y SPEED_TENS_DIGIT_ORIGIN_Y


static
void draw_number(unsigned int num, unsigned int start_x, unsigned int start_y)
{
    oled_draw(
        tahoma_28ptFontInfo.char_data + tahoma_28ptFontInfo.char_info[num].offset,
        tahoma_28ptFontInfo.char_info[num].width_bits * tahoma_28ptFontInfo.height_pages,
        start_x,
        start_y,
        tahoma_28ptFontInfo.char_info[num].width_bits
    );
}

void main_draw_speed(unsigned int speed)
{
    unsigned int tens_digit = speed / 10;
    unsigned int ones_digit = speed % 10;
    draw_number(tens_digit, SPEED_TENS_DIGIT_ORIGIN_X, SPEED_TENS_DIGIT_ORIGIN_Y);
    draw_number(ones_digit, SPEED_ONES_DIGIT_ORIGIN_X, SPEED_ONES_DIGIT_ORIGIN_Y);
}

void main_draw_speed_units(void)
{
    // TODO: check if metric or imperial

}

void main_draw_bat_per(void)
{

}

void main_draw_range_to_empty_label(void)
{

}

void main_draw_range_to_empty(void)
{

}

void main_draw(void)
{

}
