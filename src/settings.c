////////////////////////////////////////////////////////////////////////////////
// Settings Menu
////////////////////////////////////////////////////////////////////////////////
#define TITLE "SETTINGS"
#define TITLE_START_X 10
#define TITLE_START_Y 1
#define SETTINGS_SPACING 2

#define BAT_PER_SETTING "BAT PER"
#define BAT_PER_SELECTED 0
#define BAT_PER_SETTING_START_X 1
#define BAT_PER_SETTING_START_Y 4
#define BAT_PER_SWITCH_START_X 35
#define BAT_PER_SWITCH_START_Y BAT_PER_SETTING_START_Y

#define BLE_PER_SETTING "BLE PER"
#define BLE_PER_SELECTED 1
#define BLE_PER_SETTING_START_X BAT_PER_SETTING_START_X
#define BLE_PER_SETTING_START_Y BAT_PER_SETTING_START_Y + SETTINGS_SPACING
#define BLE_PER_SWITCH_START_X BAT_PER_SWITCH_START_X
#define BLE_PER_SWITCH_START_Y BLE_PER_SETTING_START_Y

#define METRIC_SETTING "METRIC"
#define METRIC_SELECTED 2
#define METRIC_SETTING_START_X BAT_PER_SETTING_START_X
#define METRIC_SETTING_START_Y BLE_PER_SETTING_START_Y + SETTINGS_SPACING
#define METRIC_SWITCH_START_X BAT_PER_SWITCH_START_X
#define METRIC_SWITCH_START_Y METRIC_SETTING_START_Y

#define LOW_POWER_SETTING "LOW   P"
#define LOW_POWER_SELECTED 3
#define LOW_POWER_SETTING_START_X BAT_PER_SETTING_START_X
#define LOW_POWER_SETTING_START_Y METRIC_SETTING_START_Y + SETTINGS_SPACING
#define LOW_POWER_SWITCH_START_X BAT_PER_SWITCH_START_X
#define LOW_POWER_SWITCH_START_Y LOW_POWER_SETTING_START_Y

#define ODO_SETTING "ODO"
#define ODO_SETTING_START_X BAT_PER_SETTING_START_X
#define ODO_SETTING_START_Y LOW_POWER_SETTING_START_Y + SETTINGS_SPACING
#define ODO_COUNTER_START_X BAT_PER_SWITCH_START_X - 4
#define ODO_COUNTER_START_Y ODO_SETTING_START_Y

#define VERSION_NUM "1"
#define MILK_V "0.2"
#define VERSION_START_X 1
#define VERSION_START_Y 27

static volatile unsigned char selected_setting;

void settings_draw_title(bit erase_en)
{
    common_draw_text(TITLE, TITLE_START_X, TITLE_START_Y, erase_en);
}

void settings_draw_bat_per_setting(bit erase_en)
{
    common_draw_text(BAT_PER_SETTING, BAT_PER_SETTING_START_X, BAT_PER_SETTING_START_Y, erase_en);
}

void settings_draw_bat_per_selected_line(bit erase_en)
{
    common_draw_text("______", BAT_PER_SETTING_START_X, BAT_PER_SETTING_START_Y + 1, erase_en);
}

void settings_draw_bat_per_switch(bit erase_en)
{
    oled_draw(switch_off, sizeof switch_off, BAT_PER_SWITCH_START_X, BAT_PER_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
}

void settings_draw_ble_per_setting(bit erase_en)
{
    common_draw_text(BLE_PER_SETTING, BLE_PER_SETTING_START_X, BLE_PER_SETTING_START_Y, erase_en);
}

void settings_draw_ble_per_selected_line(bit erase_en)
{
    common_draw_text("______", BLE_PER_SETTING_START_X, BLE_PER_SETTING_START_Y + 1, erase_en);
}

void settings_draw_ble_per_switch(bit erase_en)
{
    // TODO: switch on or off depending on state
    oled_draw(switch_off, sizeof switch_off, BLE_PER_SWITCH_START_X, BLE_PER_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
}

void settings_draw_metric_setting(bit erase_en)
{
    common_draw_text(METRIC_SETTING, METRIC_SETTING_START_X, METRIC_SETTING_START_Y, erase_en);
}

void settings_draw_metric_selected_line(bit erase_en)
{
    common_draw_text("______", METRIC_SETTING_START_X, METRIC_SETTING_START_Y + 1, erase_en);
}

void settings_draw_metric_switch(bit erase_en)
{
    oled_draw(switch_off, sizeof switch_off, METRIC_SWITCH_START_X, METRIC_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
}

void settings_draw_low_power_setting(bit erase_en)
{
    common_draw_text(LOW_POWER_SETTING, LOW_POWER_SETTING_START_X, LOW_POWER_SETTING_START_Y, erase_en);
}

void settings_draw_low_power_selected_line(bit erase_en)
{
    common_draw_text("______", LOW_POWER_SETTING_START_X, LOW_POWER_SETTING_START_Y + 1, erase_en);
}

void settings_draw_low_power_switch(bit erase_en)
{
    // TODO: switch on or off depending on state
    oled_draw(switch_off, sizeof switch_off, LOW_POWER_SWITCH_START_X, LOW_POWER_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
}

void settings_draw_odo_setting(bit erase_en)
{
    common_draw_text(ODO_SETTING, ODO_SETTING_START_X, ODO_SETTING_START_Y, erase_en);
}

void settings_draw_odo_counter(bit erase_en)
{
    // TODO: use an actual counter
    common_draw_text("00000", ODO_COUNTER_START_X, ODO_COUNTER_START_Y, erase_en);
}

void settings_draw_version_info(bit erase_en)
{
    common_draw_text("MILK   V "MILK_V, VERSION_START_X, VERSION_START_Y, erase_en);
    common_draw_text("VERSION   "VERSION_NUM, VERSION_START_X, VERSION_START_Y + 1, erase_en);
    common_draw_text("018.6.0001", VERSION_START_X, VERSION_START_Y + 2, erase_en);
    common_draw_text("FCC INFO", VERSION_START_X + 2, VERSION_START_Y + 3, erase_en);
}

void settings_draw_selected_line(bit erase_en)
{
    switch (selected_setting)
    {
        case BAT_PER_SELECTED:
            settings_draw_low_power_selected_line(TRUE);
            settings_draw_bat_per_selected_line(erase_en);
            break;

        case BLE_PER_SELECTED:
            settings_draw_bat_per_selected_line(TRUE);
            settings_draw_ble_per_selected_line(erase_en);
            break;

        case METRIC_SELECTED:
            settings_draw_ble_per_selected_line(TRUE);
            settings_draw_metric_selected_line(erase_en);
            break;
        
        case LOW_POWER_SELECTED:
            settings_draw_metric_selected_line(TRUE);
            settings_draw_low_power_selected_line(erase_en);
            break;
    }
}

void setting_select_switch(void)
{
    selected_setting = selected_setting == LOW_POWER_SELECTED ? BAT_PER_SELECTED : selected_setting + 1;
    settings_draw_selected_line(FALSE);
}

void settings_draw(bit erase_en)
{
    settings_draw_title(erase_en);
    settings_draw_bat_per_setting(erase_en);
    settings_draw_bat_per_switch(erase_en);
    settings_draw_ble_per_setting(erase_en);
    settings_draw_ble_per_switch(erase_en);
    settings_draw_metric_setting(erase_en);
    settings_draw_metric_switch(erase_en);
    settings_draw_low_power_setting(erase_en);
    settings_draw_low_power_switch(erase_en);
    settings_draw_odo_setting(erase_en);
    settings_draw_odo_counter(erase_en);

    settings_draw_version_info(erase_en);

    selected_setting = 0;
    settings_draw_selected_line(erase_en);
}

///////////////////////////////////////////////////////////////////////////////////