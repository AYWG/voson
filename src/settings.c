////////////////////////////////////////////////////////////////////////////////
// Settings Menu
////////////////////////////////////////////////////////////////////////////////
#define TITLE "SETTINGS"
#define TITLE_START_X 10
#define TITLE_START_Y 1
#define SETTINGS_SPACING 2

#define BAT_PER_LABEL "BAT PER"
#define BAT_PER_LABEL_START_X 1
#define BAT_PER_LABEL_START_Y 3
#define BAT_PER_SWITCH_START_X 35
#define BAT_PER_SWITCH_START_Y BAT_PER_LABEL_START_Y

#define BLE_PER_LABEL "BLE PER"
#define BLE_PER_LABEL_START_X BAT_PER_LABEL_START_X
#define BLE_PER_LABEL_START_Y BAT_PER_LABEL_START_Y + SETTINGS_SPACING
#define BLE_PER_SWITCH_START_X BAT_PER_SWITCH_START_X
#define BLE_PER_SWITCH_START_Y BLE_PER_LABEL_START_Y

#define METRIC_LABEL "METRIC"
#define METRIC_LABEL_START_X BAT_PER_LABEL_START_X
#define METRIC_LABEL_START_Y BLE_PER_LABEL_START_Y + SETTINGS_SPACING
#define METRIC_SWITCH_START_X BAT_PER_SWITCH_START_X
#define METRIC_SWITCH_START_Y METRIC_LABEL_START_Y

#define LOW_POWER_LABEL "LOW   P"
#define LOW_POWER_LABEL_START_X BAT_PER_LABEL_START_X
#define LOW_POWER_LABEL_START_Y METRIC_LABEL_START_Y + SETTINGS_SPACING
#define LOW_POWER_SWITCH_START_X BAT_PER_SWITCH_START_X
#define LOW_POWER_SWITCH_START_Y LOW_POWER_LABEL_START_Y

#define ODO_LABEL "ODO"
#define ODO_LABEL_START_X BAT_PER_LABEL_START_X
#define ODO_LABEL_START_Y LOW_POWER_LABEL_START_Y + SETTINGS_SPACING
#define ODO_COUNTER_START_X BAT_PER_SWITCH_START_X - 4
#define ODO_COUNTER_START_Y ODO_LABEL_START_Y

#define VERSION_NUM "1"
#define MILK_V "0.2"
#define VERSION_START_X 1
#define VERSION_START_Y 27

void settings_draw_title(void)
{
    common_draw_text(TITLE, TITLE_START_X, TITLE_START_Y);
}

void settings_draw_bat_per_label(void)
{
    common_draw_text(BAT_PER_LABEL, BAT_PER_LABEL_START_X, BAT_PER_LABEL_START_Y);
}

void settings_draw_bat_per_switch(void)
{
    // TODO: check for state
    oled_draw(switch_off, sizeof switch_off, BAT_PER_SWITCH_START_X, BAT_PER_SWITCH_START_Y, SWITCH_WIDTH);
}

void settings_draw_ble_per_label(void)
{
    common_draw_text(BLE_PER_LABEL, BLE_PER_LABEL_START_X, BLE_PER_LABEL_START_Y);
}

void settings_draw_ble_per_switch(void)
{
    // TODO: switch on or off depending on state
    oled_draw(switch_off, sizeof switch_off, BLE_PER_SWITCH_START_X, BLE_PER_SWITCH_START_Y, SWITCH_WIDTH);
}

void settings_draw_metric_label(void)
{
    common_draw_text(METRIC_LABEL, METRIC_LABEL_START_X, METRIC_LABEL_START_Y);
}

void settings_draw_metric_switch(void)
{
    oled_draw(switch_off, sizeof switch_off, METRIC_SWITCH_START_X, METRIC_SWITCH_START_Y, SWITCH_WIDTH);
}

void settings_draw_low_power_label(void)
{
    common_draw_text(LOW_POWER_LABEL, LOW_POWER_LABEL_START_X, LOW_POWER_LABEL_START_Y);
}

void settings_draw_low_power_switch(void)
{
    // TODO: switch on or off depending on state
    oled_draw(switch_off, sizeof switch_off, LOW_POWER_SWITCH_START_X, LOW_POWER_SWITCH_START_Y, SWITCH_WIDTH);
}


void settings_draw_odo_label(void)
{
    common_draw_text(ODO_LABEL, ODO_LABEL_START_X, ODO_LABEL_START_Y);
}

void settings_draw_odo_counter(void)
{
    // TODO: use an actual counter
    common_draw_text("00000", ODO_COUNTER_START_X, ODO_COUNTER_START_Y);
}

void settings_draw_version_info(void)
{
    common_draw_text("MILK   V "MILK_V, VERSION_START_X, VERSION_START_Y);
    common_draw_text("VERSION   "VERSION_NUM, VERSION_START_X, VERSION_START_Y + 1);
    common_draw_text("018.6.0001", VERSION_START_X, VERSION_START_Y + 2);
    common_draw_text("FCC INFO", VERSION_START_X + 2, VERSION_START_Y + 3);
}

void settings_draw(void)
{
    settings_draw_title();
    settings_draw_bat_per_label();
    settings_draw_bat_per_switch();
    settings_draw_ble_per_label();
    settings_draw_ble_per_switch();
    settings_draw_metric_label();
    settings_draw_metric_switch();
    settings_draw_low_power_label();
    settings_draw_low_power_switch();
    settings_draw_odo_label();
    settings_draw_odo_counter();

    settings_draw_version_info();   
}

///////////////////////////////////////////////////////////////////////////////////