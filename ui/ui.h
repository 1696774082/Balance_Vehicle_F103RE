// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: PHC_RET6

#ifndef _PHC_RET6_UI_H
#define _PHC_RET6_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1(lv_event_t * e);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Spinner1;
extern lv_obj_t * ui_Uprightring;
void ui_event_UprightringP(lv_event_t * e);
extern lv_obj_t * ui_UprightringP;
extern lv_obj_t * ui_UprightringLabel;
void ui_event_UprightringD(lv_event_t * e);
extern lv_obj_t * ui_UprightringD;
extern lv_obj_t * ui_Speedloop;
void ui_event_SpeedloopP(lv_event_t * e);
extern lv_obj_t * ui_SpeedloopP;
extern lv_obj_t * ui_SpeedloopLabel;
void ui_event_SpeedloopI(lv_event_t * e);
extern lv_obj_t * ui_SpeedloopI;
extern lv_obj_t * ui_v0Label;
extern lv_obj_t * ui_v1Label;
extern lv_obj_t * ui____initial_actions0;

LV_FONT_DECLARE(ui_font_chinese);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
