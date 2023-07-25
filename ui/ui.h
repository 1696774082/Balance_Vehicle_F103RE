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
// SCREEN: ui_mainScreen
void ui_mainScreen_screen_init(void);
void ui_event_mainScreen(lv_event_t * e);
extern lv_obj_t * ui_mainScreen;
extern lv_obj_t * ui_Panel3;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_batBar;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_Spinner1;
void ui_event_toControlButton(lv_event_t * e);
extern lv_obj_t * ui_toControlButton;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Spinner2;
void ui_event_toPidButton(lv_event_t * e);
extern lv_obj_t * ui_toPidButton;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Panel4;
extern lv_obj_t * ui_Spinner3;
void ui_event_toTsl1401Button(lv_event_t * e);
extern lv_obj_t * ui_toTsl1401Button;
extern lv_obj_t * ui_Label6;
// SCREEN: ui_pidControlScreen
void ui_pidControlScreen_screen_init(void);
void ui_event_pidControlScreen(lv_event_t * e);
extern lv_obj_t * ui_pidControlScreen;
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
void ui_event_MotorSwitch(lv_event_t * e);
extern lv_obj_t * ui_MotorSwitch;
extern lv_obj_t * ui_Steeringring;
void ui_event_SteeringringP(lv_event_t * e);
extern lv_obj_t * ui_SteeringringP;
void ui_event_SteeringringD(lv_event_t * e);
extern lv_obj_t * ui_SteeringringD;
void ui_event_SteeringringI(lv_event_t * e);
extern lv_obj_t * ui_SteeringringI;
void ui_event_zeroButton(lv_event_t * e);
extern lv_obj_t * ui_zeroButton;
extern lv_obj_t * ui_Label1;
void ui_event_backButton(lv_event_t * e);
extern lv_obj_t * ui_backButton;
extern lv_obj_t * ui_Label3;
// SCREEN: ui_MotorControlScreen
void ui_MotorControlScreen_screen_init(void);
void ui_event_MotorControlScreen(lv_event_t * e);
extern lv_obj_t * ui_MotorControlScreen;
extern lv_obj_t * ui_Forward_and_backward_panel;
extern lv_obj_t * ui_Forward_and_backwardLabel;
void ui_event_Forward_and_backward(lv_event_t * e);
extern lv_obj_t * ui_Forward_and_backward;
void ui_event_MotorSwitch1(lv_event_t * e);
extern lv_obj_t * ui_MotorSwitch1;
void ui_event_backButton1(lv_event_t * e);
extern lv_obj_t * ui_backButton1;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_Left_turn_right_turn_panel;
extern lv_obj_t * ui_Left_turn_right_turnLabel;
void ui_event_Left_turn_and_right_turn(lv_event_t * e);
extern lv_obj_t * ui_Left_turn_and_right_turn;
// SCREEN: ui_tsl1401Screen
void ui_tsl1401Screen_screen_init(void);
void ui_event_tsl1401Screen(lv_event_t * e);
extern lv_obj_t * ui_tsl1401Screen;
extern lv_obj_t * ui_TSL1401Chart;
extern lv_obj_t * ui____initial_actions0;

LV_FONT_DECLARE(ui_font_chinese);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
