#ifndef PID_H
#define PID_H

typedef struct 
{
    float kp,ki,kd;
    float deviation, last_deviation, sum_deviation,diff_deviation;
    float out_max, i_max;
} pid_handler;


void pid_init(pid_handler *pid, float kp, float ki, float kd, float out_max, float i_max);
float pid_update(pid_handler *pid, float deviation);
float pid_updatePD(pid_handler *pid, float deviation);
float pid_updatePI(pid_handler *pid, float deviation);
#endif
