////////////////////////////////////////////////////////////////////////////////
// Main Menu
////////////////////////////////////////////////////////////////////////////////
#define SPEED_TENS_DIGIT_START_X 15
#define SPEED_TENS_DIGIT_START_Y 8
#define SPEED_ONES_DIGIT_START_X 35
#define SPEED_ONES_DIGIT_START_Y SPEED_TENS_DIGIT_START_Y

#define SPEED_UNITS_START_X 20
#define SPEED_UNITS_START_Y 13

#define BAT_START_X 45
#define BAT_START_Y 1

#define BAT_PER_START_X BAT_START_X
#define BAT_PER_START_Y BAT_START_Y + 4

#define BT_SIGNAL_START_X 10
#define BT_SIGNAL_START_Y BAT_START_Y
#define BT_SIGNAL_VAL_START_X BT_SIGNAL_START_X + 2
#define BT_SIGNAL_VAL_START_Y BT_SIGNAL_START_Y + 4

#define RANGE_TO_E_LABEL_START_X 5
#define RANGE_TO_E_LABEL_START_Y 24
#define RANGE_TO_E_START_X RANGE_TO_E_LABEL_START_X
#define RANGE_TO_E_START_Y RANGE_TO_E_LABEL_START_Y + 1

#define REMOTE_LABEL_START_X 25
#define REMOTE_LABEL_START_Y 28
#define REMOTE_BAT_PER_START_X REMOTE_LABEL_START_X
#define REMOTE_BAT_PER_START_Y REMOTE_LABEL_START_Y + 1

#define REMOTE_BAT_START_X 5
#define REMOTE_BAT_START_Y REMOTE_LABEL_START_Y - 1

static unsigned char current_speed;

static
void draw_number(unsigned int num, unsigned int start_x, unsigned int start_y, bit erase_en)
{
    oled_draw(
        tahoma_28ptFontInfo.char_data + tahoma_28ptFontInfo.char_info[num].offset,
        tahoma_28ptFontInfo.char_info[num].width_bits * tahoma_28ptFontInfo.height_pages,
        start_x,
        start_y,
        tahoma_28ptFontInfo.char_info[num].width_bits,
        erase_en
    );
}

void main_draw_speed(bit erase_en, unsigned int speed)
{
    unsigned int tens_digit = speed / 10;
    unsigned int ones_digit = speed % 10;
    draw_number(tens_digit, SPEED_TENS_DIGIT_START_X, SPEED_TENS_DIGIT_START_Y, erase_en);
    draw_number(ones_digit, SPEED_ONES_DIGIT_START_X, SPEED_ONES_DIGIT_START_Y, erase_en);
}

void main_draw_speed_units(bit erase_en)
{
    // TODO: check if metric or imperial
    common_draw_text("km / h", SPEED_UNITS_START_X, SPEED_UNITS_START_Y, erase_en);
}

void main_draw_bat(bit erase_en)
{
    oled_draw(battery_empty, sizeof battery_empty,BAT_START_X, BAT_START_Y, BATTERY_EMPTY_WIDTH, erase_en);
}

void main_draw_bat_per(bit erase_en)
{
    common_draw_text("50 %", BAT_PER_START_X, BAT_PER_START_Y, erase_en);
}

void main_draw_bt_signal(bit erase_en)
{
    oled_draw(bt_signal_two, sizeof bt_signal_two, BT_SIGNAL_START_X, BT_SIGNAL_START_Y, BT_SIGNAL_WIDTH, erase_en);
}

void main_draw_bt_signal_val(bit erase_en)
{
    common_draw_text("-55", BT_SIGNAL_VAL_START_X, BT_SIGNAL_VAL_START_Y, erase_en);
}

void main_draw_range_to_empty_label(bit erase_en)
{
    common_draw_text("RANGE    TO    E", RANGE_TO_E_LABEL_START_X, RANGE_TO_E_LABEL_START_Y, erase_en);
}

void main_draw_range_to_empty(bit erase_en)
{
    common_draw_text("23                 km", RANGE_TO_E_START_X, RANGE_TO_E_START_Y, erase_en);
}

void main_draw_remote_label(bit erase_en)
{
    common_draw_text("REMOTE", REMOTE_LABEL_START_X, REMOTE_LABEL_START_Y, erase_en);
}

void main_draw_remote_bat_per(bit erase_en)
{
    common_draw_text("50 %", REMOTE_BAT_PER_START_X, REMOTE_BAT_PER_START_Y, erase_en);
}

void main_draw_remote_bat(bit erase_en)
{
    oled_draw(battery_empty, sizeof battery_empty, REMOTE_BAT_START_X, REMOTE_BAT_START_Y, BATTERY_EMPTY_WIDTH, erase_en);
}

void main_draw(bit erase_en)
{
    main_draw_bat(erase_en);
    main_draw_bat_per(erase_en);

    main_draw_bt_signal(erase_en);
    main_draw_bt_signal_val(erase_en);

    main_draw_speed(erase_en, current_speed);
    main_draw_speed_units(erase_en);

    main_draw_range_to_empty_label(erase_en);
    main_draw_range_to_empty(erase_en);

    main_draw_remote_label(erase_en);
    main_draw_remote_bat_per(erase_en);
    main_draw_remote_bat(erase_en);
}

///////////////////////////////////////////////////////////////////////////////////

void main_init(void)
{
    current_speed = 0;
}

void main_update_speed(unsigned char new_speed)
{
    main_draw_speed(ERASE, current_speed);
    current_speed = new_speed;
    main_draw_speed(DRAW, new_speed);
}
