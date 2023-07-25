// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: PHC_RET6

#include "ui.h"
#include "pid.h"
#include "stdio.h"
#include "cmsis_os.h"
#include "queue.h"
extern pid_handler Upright_ring_pid,Speed_loop_pid,Steering_ring_pid;
extern osMessageQueueId_t Motor_isEnable_queueHandle;
char sbuf[30];
void Screen1_init(lv_event_t * e)
{
    lv_group_add_obj(lv_group_get_default(), ui_MotorSwitch);
	lv_group_add_obj(lv_group_get_default(), ui_UprightringP);
    lv_group_add_obj(lv_group_get_default(), ui_UprightringD);
    lv_group_add_obj(lv_group_get_default(), ui_SpeedloopP);
    lv_group_add_obj(lv_group_get_default(), ui_SpeedloopI);
    lv_group_add_obj(lv_group_get_default(), ui_SteeringringP);
    lv_group_add_obj(lv_group_get_default(), ui_SteeringringI);
    lv_group_add_obj(lv_group_get_default(), ui_SteeringringD);
    lv_group_add_obj(lv_group_get_default(), ui_zeroButton);
    
    
    lv_label_set_text_fmt(ui_UprightringP, "P:%d", (int)Upright_ring_pid.kp);
    lv_label_set_text_fmt(ui_UprightringD, "D:%d", (int)Upright_ring_pid.kd);
    sprintf(sbuf,"P:%.1f",Speed_loop_pid.kp);
    lv_label_set_text(ui_SpeedloopP, sbuf);
    sprintf(sbuf,"I:%.1f",Speed_loop_pid.ki);
    lv_label_set_text(ui_SpeedloopI, sbuf);
    sprintf(sbuf,"P:%d",(int)Steering_ring_pid.kp);
    lv_label_set_text(ui_SteeringringP, sbuf);
    sprintf(sbuf,"I:%.2f",Steering_ring_pid.ki);
    lv_label_set_text(ui_SteeringringI, sbuf);
    sprintf(sbuf,"D:%d",(int)Steering_ring_pid.kd);
    lv_label_set_text(ui_SteeringringD, sbuf);
    

}


void UprightringP_Left(lv_event_t * e)
{
	Upright_ring_pid.kp +=100;
    lv_label_set_text_fmt(ui_UprightringP, "P:%d", (int)Upright_ring_pid.kp);
}

void UprightringP_Right(lv_event_t * e)
{
	Upright_ring_pid.kp +=-100;
    lv_label_set_text_fmt(ui_UprightringP, "P:%d", (int)Upright_ring_pid.kp);
}

void UprightringD_Left(lv_event_t * e)
{
	Upright_ring_pid.kd +=200;
    lv_label_set_text_fmt(ui_UprightringD, "D:%d", (int)Upright_ring_pid.kd);
}

void UprightringD_Right(lv_event_t * e)
{
	Upright_ring_pid.kd +=-200;
    lv_label_set_text_fmt(ui_UprightringD, "D:%d", (int)Upright_ring_pid.kd);
}

void SpeedloopP_Left(lv_event_t * e)
{
	Speed_loop_pid.kp +=5;
    sprintf(sbuf,"P:%.1f",Speed_loop_pid.kp);
    lv_label_set_text(ui_SpeedloopP, sbuf);
}

void SpeedloopP_Right(lv_event_t * e)
{
	Speed_loop_pid.kp -=5;
    sprintf(sbuf,"P:%.1f",Speed_loop_pid.kp);
    lv_label_set_text(ui_SpeedloopP, sbuf);
}

void SpeedloopI_Left(lv_event_t * e)
{
	Speed_loop_pid.ki +=0.05;
    sprintf(sbuf,"I:%.2f",Speed_loop_pid.ki);
    lv_label_set_text(ui_SpeedloopI, sbuf);
}

void SpeedloopI_Right(lv_event_t * e)
{
	Speed_loop_pid.ki -=0.05;
    sprintf(sbuf,"I:%.2f",Speed_loop_pid.ki);
    lv_label_set_text(ui_SpeedloopI, sbuf);
}

void Motor_switch_checked(lv_event_t * e)
{
    uint8_t isEnable=1;
    Speed_loop_pid.sum_deviation=0;
	xQueueSend(Motor_isEnable_queueHandle, &isEnable, 10);
}

void Motor_switch_unchecked(lv_event_t * e)
{
	uint8_t isEnable=0;
	xQueueSend(Motor_isEnable_queueHandle, &isEnable, 10);
}

void SteeringRingP_Left(lv_event_t * e)
{
	Steering_ring_pid.kp +=10;
    sprintf(sbuf,"P:%d",(int)Steering_ring_pid.kp);
    lv_label_set_text(ui_SteeringringP, sbuf);
}

void SteeringRingP_Right(lv_event_t * e)
{
	Steering_ring_pid.kp -=10;
    sprintf(sbuf,"P:%d",(int)Steering_ring_pid.kp);
    lv_label_set_text(ui_SteeringringP, sbuf);
}

void SteeringRingD_Left(lv_event_t * e)
{
	Steering_ring_pid.kd +=10;
    sprintf(sbuf,"D:%.1f",Steering_ring_pid.kd);
    lv_label_set_text(ui_SteeringringD, sbuf);
}

void SteeringRingD_Right(lv_event_t * e)
{
	Steering_ring_pid.kd -=10;
    sprintf(sbuf,"D:%.1f",Steering_ring_pid.kd);
    lv_label_set_text(ui_SteeringringD, sbuf);
}

void SteeringRingI_Left(lv_event_t * e)
{
	Steering_ring_pid.ki +=0.5f;
    sprintf(sbuf,"I:%.1f",Steering_ring_pid.ki);
    lv_label_set_text(ui_SteeringringI, sbuf);
}

void SteeringRingI_Right(lv_event_t * e)
{
	Steering_ring_pid.ki -=0.5f;
    sprintf(sbuf,"I:%.1f",Steering_ring_pid.ki);
    lv_label_set_text(ui_SteeringringI, sbuf);
}

void zero(lv_event_t * e)
{
	Upright_ring_pid.kp=0;
    Upright_ring_pid.kd=0;
    Speed_loop_pid.kp=0;
    Speed_loop_pid.ki=0;
    Steering_ring_pid.kp=0;
    Steering_ring_pid.kd=0;
    Steering_ring_pid.ki=0;
    lv_label_set_text_fmt(ui_UprightringP, "P:%d", (int)Upright_ring_pid.kp);
    lv_label_set_text_fmt(ui_UprightringD, "D:%d", (int)Upright_ring_pid.kd);
    sprintf(sbuf,"P:%.1f",Speed_loop_pid.kp);
    lv_label_set_text(ui_SpeedloopP, sbuf);
    sprintf(sbuf,"I:%.2f",Speed_loop_pid.ki);
    lv_label_set_text(ui_SpeedloopI, sbuf);
    sprintf(sbuf,"P:%d",Steering_ring_pid.kp);
    lv_label_set_text(ui_SteeringringP, sbuf);
    sprintf(sbuf,"D:%d",Steering_ring_pid.kd);
    lv_label_set_text(ui_SteeringringD, sbuf);
    sprintf(sbuf,"I:%.2f",Steering_ring_pid.ki);
    lv_label_set_text(ui_SteeringringI, sbuf);
}
