/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * File Name          : freertos.c
 * Description        : Code for freertos applications
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "mpu6050.h"
#include "ssd1306.h"
#include "tim.h"
#include "pid.h"
#include "stdio.h"
#include "myfunc.h"
#include "queue.h"
#include "lvgl.h"
#include "ui.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .stack_size = 600 * 4,
  .priority = (osPriority_t) osPriorityLow2,
};
/* Definitions for myTask02 */
osThreadId_t myTask02Handle;
const osThreadAttr_t myTask02_attributes = {
  .name = "myTask02",
  .stack_size = 500 * 4,
  .priority = (osPriority_t) osPriorityRealtime,
};
/* Definitions for myTask03 */
osThreadId_t myTask03Handle;
const osThreadAttr_t myTask03_attributes = {
  .name = "myTask03",
  .stack_size = 500 * 4,
  .priority = (osPriority_t) osPriorityRealtime1,
};
/* Definitions for pitch_queue */
osMessageQueueId_t pitch_queueHandle;
const osMessageQueueAttr_t pitch_queue_attributes = {
  .name = "pitch_queue"
};
/* Definitions for speed_loop_OUT_queue */
osMessageQueueId_t speed_loop_OUT_queueHandle;
const osMessageQueueAttr_t speed_loop_OUT_queue_attributes = {
  .name = "speed_loop_OUT_queue"
};
/* Definitions for Motor_isEnable_queue */
osMessageQueueId_t Motor_isEnable_queueHandle;
const osMessageQueueAttr_t Motor_isEnable_queue_attributes = {
  .name = "Motor_isEnable_queue"
};
/* Definitions for Speed_difference_OUT_queue */
osMessageQueueId_t Speed_difference_OUT_queueHandle;
const osMessageQueueAttr_t Speed_difference_OUT_queue_attributes = {
  .name = "Speed_difference_OUT_queue"
};
/* Definitions for target_speed_Queue */
osMessageQueueId_t target_speed_QueueHandle;
const osMessageQueueAttr_t target_speed_Queue_attributes = {
  .name = "target_speed_Queue"
};
/* Definitions for target_speed_difference_Queue */
osMessageQueueId_t target_speed_difference_QueueHandle;
const osMessageQueueAttr_t target_speed_difference_Queue_attributes = {
  .name = "target_speed_difference_Queue"
};
/* Definitions for lvgl_mutex */
osMutexId_t lvgl_mutexHandle;
const osMutexAttr_t lvgl_mutex_attributes = {
  .name = "lvgl_mutex"
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void *argument);
void Upright_ring_Task(void *argument);
void Speed_loop_Task(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */
  /* Create the mutex(es) */
  /* creation of lvgl_mutex */
  lvgl_mutexHandle = osMutexNew(&lvgl_mutex_attributes);

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* Create the queue(s) */
  /* creation of pitch_queue */
  pitch_queueHandle = osMessageQueueNew (1, sizeof(float), &pitch_queue_attributes);

  /* creation of speed_loop_OUT_queue */
  speed_loop_OUT_queueHandle = osMessageQueueNew (1, sizeof(float), &speed_loop_OUT_queue_attributes);

  /* creation of Motor_isEnable_queue */
  Motor_isEnable_queueHandle = osMessageQueueNew (1, sizeof(uint8_t), &Motor_isEnable_queue_attributes);

  /* creation of Speed_difference_OUT_queue */
  Speed_difference_OUT_queueHandle = osMessageQueueNew (1, sizeof(int16_t), &Speed_difference_OUT_queue_attributes);

  /* creation of target_speed_Queue */
  target_speed_QueueHandle = osMessageQueueNew (1, sizeof(float), &target_speed_Queue_attributes);

  /* creation of target_speed_difference_Queue */
  target_speed_difference_QueueHandle = osMessageQueueNew (1, sizeof(int32_t), &target_speed_difference_Queue_attributes);

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of defaultTask */
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);

  /* creation of myTask02 */
  myTask02Handle = osThreadNew(Upright_ring_Task, NULL, &myTask02_attributes);

  /* creation of myTask03 */
  myTask03Handle = osThreadNew(Speed_loop_Task, NULL, &myTask03_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
 * @brief  Function implementing the defaultTask thread.
 * @param  argument: Not used
 * @retval None
 */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* USER CODE BEGIN StartDefaultTask */
  /* Infinite loop */
  vTaskDelay(pdMS_TO_TICKS(500));
  uint32_t r;
  ui_init();
  for (;;)
  {
    osMutexAcquire(lvgl_mutexHandle, osWaitForever);
    r= lv_timer_handler();
    osMutexRelease(lvgl_mutexHandle);
    osDelay(r);

  }
  /* USER CODE END StartDefaultTask */
}

/* USER CODE BEGIN Header_Upright_ring_Task */
pid_handler Upright_ring_pid,Speed_loop_pid,Steering_ring_pid;
;

/**
 * @brief Function implementing the myTask02 thread.
 * @param argument: Not used
 * @retval None
 */
/* USER CODE END Header_Upright_ring_Task */
void Upright_ring_Task(void *argument)
{
  /* USER CODE BEGIN Upright_ring_Task */
  /* Infinite loop */
  
  float speed_loop_OUT = 0;
  float pitch, roll, yaw;
  int16_t pwm = 0;
  uint8_t isEnable = 1;
  TickType_t xLastWakeTime=xTaskGetTickCount();
  float vSum = 0;
  int16_t Speed_difference_OUT;
  // pid_init(&Upright_ring_pid, 720, 0.0, 3600, 7200-1, 5000);  
  pid_init(&Upright_ring_pid, 992, 0.0, 7800, 7200-1, 5000);  

  vTaskDelay(pdMS_TO_TICKS(5000));
  for (;;)
  {
    xQueueReceive(Motor_isEnable_queueHandle, &isEnable, 0);
    if(isEnable==0){
      motor_control(0, 0);
      vTaskDelayUntil(&xLastWakeTime, pdMS_TO_TICKS(50));
      continue;
    }
    for (uint8_t i = 0; i < 3; i++)
    {
        MPU6050_Read_DMP(&pitch, &roll, &yaw);
    }
    xQueueSend(pitch_queueHandle, &pitch, 0);
    if (pitch > 40 || pitch < -40)
    {
      motor_control(0, 0);
      vTaskDelayUntil(&xLastWakeTime, pdMS_TO_TICKS(50));
      continue;
    }
    

    xQueueReceive(speed_loop_OUT_queueHandle, &speed_loop_OUT, 0);
    pwm = pid_updatePD(&Upright_ring_pid, speed_loop_OUT - pitch);
    xQueueReceive(Speed_difference_OUT_queueHandle, &Speed_difference_OUT, 0);
    motor_control(pwm+Speed_difference_OUT, pwm-Speed_difference_OUT);

    vTaskDelayUntil(&xLastWakeTime, pdMS_TO_TICKS(5));
  }
  /* USER CODE END Upright_ring_Task */
}

/* USER CODE BEGIN Header_Speed_loop_Task */
/**
* @brief Function implementing the myTask03 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_Speed_loop_Task */
void Speed_loop_Task(void *argument)
{
  /* USER CODE BEGIN Speed_loop_Task */
  /* Infinite loop */
  TickType_t xLastWakeTime=xTaskGetTickCount();
  float speed_loop_OUT = 0;
  int v0, v1;
  float vSum;
  int32_t Speed_difference = 0;
  int16_t Speed_difference_OUT;
  int32_t target_speed_difference=0;
  float target_speed;
  pid_init(&Speed_loop_pid, -30, -2, 0, 70, 60);
  pid_init(&Steering_ring_pid, 50, 8, 10, 7199, 4000);
  osDelay(600);
  for(;;)
  {
    v0 = (__HAL_TIM_GetCounter(&htim1) - 30000);
    v1 = (30000-__HAL_TIM_GetCounter(&htim3));
    __HAL_TIM_SetCounter(&htim1, 30000);
    __HAL_TIM_SetCounter(&htim3, 30000);
    Speed_difference=v0-v1;
    vSum = (v0/1000.0f + v1/1000.0f)*0.3f+0.7f*vSum;
    xQueueReceive(target_speed_QueueHandle, &target_speed, 0);
    xQueueReceive(target_speed_difference_QueueHandle, &target_speed_difference, 0);
    Speed_difference_OUT= pid_update(&Steering_ring_pid, target_speed_difference-Speed_difference);
    xQueueSend(Speed_difference_OUT_queueHandle, &Speed_difference_OUT, 0);
    speed_loop_OUT = pid_updatePI (&Speed_loop_pid, target_speed - vSum);
    xQueueSend(speed_loop_OUT_queueHandle, &speed_loop_OUT, 0);
    vTaskDelayUntil(&xLastWakeTime, pdMS_TO_TICKS(50));
  }
  /* USER CODE END Speed_loop_Task */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

