////////////////////////////////////////////////////////////////////////////////
// Main Menu
////////////////////////////////////////////////////////////////////////////////

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

void main_draw_speed(void)
{
    draw_number(0, 0, 0);
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
