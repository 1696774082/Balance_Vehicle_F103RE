#include "myfunc.h"

void motor_control(int16_t motor1, int16_t motor2){
    if(motor1>7199)motor1=7199;
    if(motor1<-7199)motor1=-7199;
    if(motor2>7199)motor2=7199;
    if(motor2<-7199)motor2=-7199;
    if(motor1 >= 0){ 
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, motor1);
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, 0);
    }
    else{
        __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, 0);
        __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, -motor1);
    }
    if(motor2 >= 0){ 
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_3, 0);
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_4, motor2);
    }
    else{
        __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_3, -motor2);
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_4, 0);
    }
}