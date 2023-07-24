// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: PHC_RET6

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1(lv_event_t * e);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Spinner1;
lv_obj_t * ui_Uprightring;
void ui_event_UprightringP(lv_event_t * e);
lv_obj_t * ui_UprightringP;
lv_obj_t * ui_UprightringLabel;
void ui_event_UprightringD(lv_event_t * e);
lv_obj_t * ui_UprightringD;
lv_obj_t * ui_Speedloop;
void ui_event_SpeedloopP(lv_event_t * e);
lv_obj_t * ui_SpeedloopP;
lv_obj_t * ui_SpeedloopLabel;
void ui_event_SpeedloopI(lv_event_t * e);
lv_obj_t * ui_SpeedloopI;
void ui_event_MotorSwitch(lv_event_t * e);
lv_obj_t * ui_MotorSwitch;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 8
    // #error "LV_COLOR_DEPTH should be 8bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        Screen1_init(e);
    }
}
void ui_event_UprightringP(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_KEY &&  lv_event_get_key(e) == LV_KEY_LEFT) {
        UprightringP_Left(e);
    }
    if(event_code == LV_EVENT_KEY &&  lv_event_get_key(e) == LV_KEY_RIGHT) {
        UprightringP_Right(e);
    }
}
void ui_event_UprightringD(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_KEY &&  lv_event_get_key(e) == LV_KEY_LEFT) {
        UprightringD_Left(e);
    }
    if(event_code == LV_EVENT_KEY &&  lv_event_get_key(e) == LV_KEY_RIGHT) {
        UprightringD_Right(e);
    }
}
void ui_event_SpeedloopP(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_KEY &&  lv_event_get_key(e) == LV_KEY_LEFT) {
        SpeedloopP_Left(e);
    }
    if(event_code == LV_EVENT_KEY &&  lv_event_get_key(e) == LV_KEY_RIGHT) {
        SpeedloopP_Right(e);
    }
}
void ui_event_SpeedloopI(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_KEY &&  lv_event_get_key(e) == LV_KEY_LEFT) {
        SpeedloopI_Left(e);
    }
    if(event_code == LV_EVENT_KEY &&  lv_event_get_key(e) == LV_KEY_RIGHT) {
        SpeedloopI_Right(e);
    }
}
void ui_event_MotorSwitch(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        Motor_switch_checked(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        Motor_switch_unchecked(e);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
