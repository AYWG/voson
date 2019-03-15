typedef enum { MAIN_MENU, SETTINGS_MENU, OFF_MENU } menu;

static volatile menu menu_state;

/* To be called as part of controller initialization */
void menu_init(void) 
{
    menu_state = MAIN_MENU;
}

/* Called upon switching to a new menu */
void menu_draw(void)
{
    switch (menu_state)
    {
    case MAIN_MENU:
        // Draw everything
        oled_enable_commands();
        oled_write(0xAF);
        main_draw(FALSE);
        common_draw_menu_arrow(FALSE, menu_state);
        common_draw_menu_bar(FALSE);
        common_draw_mode_bar(FALSE);
        break;
    case SETTINGS_MENU:
        main_draw(TRUE);
        common_draw_menu_arrow(TRUE, menu_state - 1);
        common_draw_menu_arrow(FALSE, menu_state);
        settings_draw(FALSE);
        break;

    case OFF_MENU:
        // Erase everything
        oled_enable_commands();
        oled_write(0xAE);
        common_draw_menu_arrow(TRUE, menu_state - 1);
        common_draw_menu_bar(TRUE);
        common_draw_mode_bar(TRUE);
        settings_draw(TRUE);
        break;
    }
}

void menu_switch(void)
{
    menu_state = menu_state == OFF_MENU ? MAIN_MENU : menu_state + 1;
    menu_draw();
}

