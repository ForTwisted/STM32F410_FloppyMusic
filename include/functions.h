/*
 * functions.h
 *
 *  Created on: 11 nov. 2016
 *      Author: furlings
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#define DIR_PIN                                GPIO_PIN_15
#define DIR_GPIO_PORT                          GPIOB

#define STEP_PIN                               GPIO_PIN_1
#define STEP_GPIO_PORT                         GPIOB

GPIO_InitTypeDef  GPIO_InitStruct;
TIM_HandleTypeDef htim6;

void SystemClock_Config(void);
void GPIO_Init(void);
void MX_TIM6_Init(void);
void HAL_TIM_Base_MspInit(TIM_HandleTypeDef* htim_base);
void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef* htim_base);
void DelayMicroSeconds(unsigned int delay);

#endif /* FUNCTIONS_H_ */
