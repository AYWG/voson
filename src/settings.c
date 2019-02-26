////////////////////////////////////////////////////////////////////////////////
// Settings Menu
////////////////////////////////////////////////////////////////////////////////
#define TITLE "SETTINGS"
#define TITLE_START_X 10
#define TITLE_START_Y 1
#define SETTINGS_SPACING 2

#define NUM_SETTINGS 4

#define BAT_PER_SETTING "BAT PER"
#define BAT_PER_SETTING_START_X 1
#define BAT_PER_SETTING_START_Y 4
#define BAT_PER_SWITCH_START_X 35
#define BAT_PER_SWITCH_START_Y BAT_PER_SETTING_START_Y

#define BLE_PER_SETTING "BLE PER"
#define BLE_PER_SETTING_START_X BAT_PER_SETTING_START_X
#define BLE_PER_SETTING_START_Y BAT_PER_SETTING_START_Y + SETTINGS_SPACING
#define BLE_PER_SWITCH_START_X BAT_PER_SWITCH_START_X
#define BLE_PER_SWITCH_START_Y BLE_PER_SETTING_START_Y

#define METRIC_SETTING "METRIC"
#define METRIC_SETTING_START_X BAT_PER_SETTING_START_X
#define METRIC_SETTING_START_Y BLE_PER_SETTING_START_Y + SETTINGS_SPACING
#define METRIC_SWITCH_START_X BAT_PER_SWITCH_START_X
#define METRIC_SWITCH_START_Y METRIC_SETTING_START_Y

#define LOW_POWER_SETTING "LOW   P"
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

typedef enum {
    BAT_PER, BLE_PER, METRIC, LOW_POWER
} setting_id;

typedef enum {
    ON, OFF
} switch_state;

typedef struct {
    switch_state state;
    setting_id id;
} setting_t;

static setting_t settings[NUM_SETTINGS];

static volatile setting_t *selected_setting;

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
    common_draw_text("------", BAT_PER_SETTING_START_X, BAT_PER_SETTING_START_Y + 1, erase_en);
}

void settings_draw_bat_per_switch(bit erase_en, switch_state state)
{
    if (state == ON) {
        oled_draw(switch_on, sizeof switch_on, BAT_PER_SWITCH_START_X, BAT_PER_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
    } else {
        oled_draw(switch_off, sizeof switch_off, BAT_PER_SWITCH_START_X, BAT_PER_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
    }
}

void settings_draw_ble_per_setting(bit erase_en)
{
    common_draw_text(BLE_PER_SETTING, BLE_PER_SETTING_START_X, BLE_PER_SETTING_START_Y, erase_en);
}

void settings_draw_ble_per_selected_line(bit erase_en)
{
    common_draw_text("------", BLE_PER_SETTING_START_X, BLE_PER_SETTING_START_Y + 1, erase_en);
}

void settings_draw_ble_per_switch(bit erase_en, switch_state state)
{
    if (state == ON) {
        oled_draw(switch_on, sizeof switch_on, BLE_PER_SWITCH_START_X, BLE_PER_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
    } else {
        oled_draw(switch_off, sizeof switch_off, BLE_PER_SWITCH_START_X, BLE_PER_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
    }
}

void settings_draw_metric_setting(bit erase_en)
{
    common_draw_text(METRIC_SETTING, METRIC_SETTING_START_X, METRIC_SETTING_START_Y, erase_en);
}

void settings_draw_metric_selected_line(bit erase_en)
{
    common_draw_text("------", METRIC_SETTING_START_X, METRIC_SETTING_START_Y + 1, erase_en);
}

void settings_draw_metric_switch(bit erase_en, switch_state state)
{
    if (state == ON) {
        oled_draw(switch_on, sizeof switch_on, METRIC_SWITCH_START_X, METRIC_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
    } else {
        oled_draw(switch_off, sizeof switch_off, METRIC_SWITCH_START_X, METRIC_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
    }
}

void settings_draw_low_power_setting(bit erase_en)
{
    common_draw_text(LOW_POWER_SETTING, LOW_POWER_SETTING_START_X, LOW_POWER_SETTING_START_Y, erase_en);
}

void settings_draw_low_power_selected_line(bit erase_en)
{
    common_draw_text("------", LOW_POWER_SETTING_START_X, LOW_POWER_SETTING_START_Y + 1, erase_en);
}

void settings_draw_low_power_switch(bit erase_en, switch_state state)
{
    if (state == ON) {
        oled_draw(switch_on, sizeof switch_on, LOW_POWER_SWITCH_START_X, LOW_POWER_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
    } else {
        oled_draw(switch_off, sizeof switch_off, LOW_POWER_SWITCH_START_X, LOW_POWER_SWITCH_START_Y, SWITCH_WIDTH, erase_en);
    }
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
    switch (selected_setting->id)
    {
        case BAT_PER:
            settings_draw_low_power_selected_line(TRUE);
            settings_draw_bat_per_selected_line(erase_en);
            break;

        case BLE_PER:
            settings_draw_bat_per_selected_line(TRUE);
            settings_draw_ble_per_selected_line(erase_en);
            break;

        case METRIC:
            settings_draw_ble_per_selected_line(TRUE);
            settings_draw_metric_selected_line(erase_en);
            break;
        
        case LOW_POWER:
            settings_draw_metric_selected_line(TRUE);
            settings_draw_low_power_selected_line(erase_en);
            break;
    }
}

void settings_refresh_switch(setting_id id)
{
    switch(id)
    {
        case BAT_PER:
            settings_draw_bat_per_switch(ERASE, ~settings[id].state);
            settings_draw_bat_per_switch(DRAW, settings[id].state);
            break;
            
        case BLE_PER:
            settings_draw_ble_per_switch(ERASE, ~settings[id].state);
            settings_draw_ble_per_switch(DRAW, settings[id].state);
            break;

        case METRIC:
            settings_draw_metric_switch(ERASE, ~settings[id].state);
            settings_draw_metric_switch(DRAW, settings[id].state);
            break;

        case LOW_POWER:
            settings_draw_low_power_switch(ERASE, ~settings[id].state);
            settings_draw_low_power_switch(DRAW, settings[id].state);
            break;
    }
}

void settings_draw(bit erase_en)
{
    settings_draw_title(erase_en);
    settings_draw_bat_per_setting(erase_en);
    settings_draw_bat_per_switch(erase_en, settings[BAT_PER].state);
    settings_draw_ble_per_setting(erase_en);
    settings_draw_ble_per_switch(erase_en, settings[BLE_PER].state);
    settings_draw_metric_setting(erase_en);
    settings_draw_metric_switch(erase_en, settings[METRIC].state);
    settings_draw_low_power_setting(erase_en);
    settings_draw_low_power_switch(erase_en, settings[LOW_POWER].state);
    settings_draw_odo_setting(erase_en);
    settings_draw_odo_counter(erase_en);

    settings_draw_version_info(erase_en);

    settings_draw_selected_line(erase_en);
}

///////////////////////////////////////////////////////////////////////////////////
void settings_init(void)
{
    unsigned char i;
    for (i = 0; i < NUM_SETTINGS; i++) {
        settings[i].id = i;
        settings[i].state = OFF;
    }
}

void setting_select_switch(void)
{
    selected_setting = selected_setting->id == LOW_POWER ? &settings[BAT_PER] : &settings[selected_setting->id + 1];
    settings_draw_selected_line(FALSE);
}

void settings_toggle(void)
{
    selected_setting->state = selected_setting->state ^ 1;
    settings_refresh_switch(selected_setting->id);
}
