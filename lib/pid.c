#include "pid.h"


void pid_init(pid_handler *pid, float kp, float ki, float kd,float out_max,float i_max)
{
    pid->kp = kp;
    pid->ki = ki;
    pid->kd = kd;
    pid->deviation = 0;
    pid->last_deviation = 0;
    pid->sum_deviation = 0;
    pid->out_max = out_max;
    pid->i_max = i_max;
}

/// @brief PID更新
/// @param pid pid结构体
/// @param deviation 偏差
/// @return 控制器输出
float pid_update(pid_handler *pid, float deviation)
{
    pid->last_deviation = pid->deviation;
    pid->deviation = deviation;
    pid->diff_deviation = pid->deviation - pid->last_deviation;
    pid->sum_deviation += deviation;
    if (pid->ki*pid->sum_deviation > pid->i_max)
    {
        pid->sum_deviation = pid->i_max / pid->ki;
    }
    else if (pid->ki*pid->sum_deviation < -pid->i_max)
    {
        pid->sum_deviation = -pid->i_max / pid->ki;
    }
    
    float output=pid->kp * deviation + pid->ki * pid->sum_deviation + pid->kd * pid->diff_deviation;
    if (output > pid->out_max)
    {
        output = pid->out_max;
    }
    else if (output < -pid->out_max)
    {
        output = -pid->out_max;
    }
    return output;
}
float pid_updatePD(pid_handler *pid, float deviation)
{
    pid->last_deviation = pid->deviation;
    pid->deviation = deviation;
    pid->diff_deviation = pid->deviation - pid->last_deviation;
    
    float output=pid->kp * deviation + pid->kd * pid->diff_deviation;
    if (output > pid->out_max)
    {
        output = pid->out_max;
    }
    else if (output < -pid->out_max)
    {
        output = -pid->out_max;
    }
    return output;
}
float pid_updatePI(pid_handler *pid, float deviation)
{
    pid->sum_deviation += deviation;
    if (pid->ki*pid->sum_deviation > pid->i_max)
    {
        pid->sum_deviation = pid->i_max / pid->ki;
    }
    else if (pid->ki*pid->sum_deviation < -pid->i_max)
    {
        pid->sum_deviation = -pid->i_max / pid->ki;
    }
    
    float output=pid->kp * deviation + pid->ki * pid->sum_deviation ;
    if (output > pid->out_max)
    {
        output = pid->out_max;
    }
    else if (output < -pid->out_max)
    {
        output = -pid->out_max;
    }
    return output;
}
