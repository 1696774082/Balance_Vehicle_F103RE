SET(SOURCES screens/ui_mainScreen.c
    screens/ui_pidControlScreen.c
    screens/ui_MotorControlScreen.c
    screens/ui_tsl1401Screen.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    fonts/ui_font_chinese.c)

add_library(ui ${SOURCES})
