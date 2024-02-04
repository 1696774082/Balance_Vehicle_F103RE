#ifndef __TSL1401_H 
#define __TSL1401_H
#include "main.h"
     
// #define TSL1401_SI_GPIO_Port GPIOA
// #define TSL1401_SI_Pin GPIO_PIN_4
// #define TSL1401_CLK_GPIO_Port GPIOA
// #define TSL1401_CLK_Pin GPIO_PIN_5
#define ADC hadc1
void tsl1401_start(void);
//开启ADC中断，放在ADC完成中断回调函数中
void tsl1401_adc_callback(void);

#endif
