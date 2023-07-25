#include "tsl1401.h"
#include "adc.h"
uint16_t tsl1401_data[128];
uint8_t tsl1401_data_index;
uint8_t tsl1401_data_is_ready;
void tsl1401_start(void)
{
    tsl1401_data_is_ready = 0;
    HAL_GPIO_WritePin(TSL1401_SI_GPIO_Port,TSL1401_SI_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(TSL1401_CLK_GPIO_Port,TSL1401_CLK_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(TSL1401_CLK_GPIO_Port,TSL1401_CLK_Pin,GPIO_PIN_RESET);
    // HAL_GPIO_WritePin(TSL1401_CLK_GPIO_Port,TSL1401_CLK_Pin,GPIO_PIN_SET);
    // HAL_GPIO_WritePin(TSL1401_CLK_GPIO_Port,TSL1401_CLK_Pin,GPIO_PIN_RESET);
    HAL_ADC_Start_IT(&hadc1);
    HAL_GPIO_WritePin(TSL1401_SI_GPIO_Port,TSL1401_SI_Pin,GPIO_PIN_RESET);
}
void tsl1401_adc_callback(void)
{
    uint32_t delay_count = 0;
    if(tsl1401_data_index >= 128)
    {
        tsl1401_data_index = 0;
        tsl1401_data_is_ready = 1;
        HAL_ADC_Stop_IT(&hadc1);
        return;
    }
    tsl1401_data[tsl1401_data_index++] = HAL_ADC_GetValue(&hadc1);
    HAL_GPIO_WritePin(TSL1401_CLK_GPIO_Port,TSL1401_CLK_Pin,GPIO_PIN_SET);
    HAL_GPIO_WritePin(TSL1401_CLK_GPIO_Port,TSL1401_CLK_Pin,GPIO_PIN_RESET);
    while(delay_count--);
    HAL_ADC_Start_IT(&hadc1);
}