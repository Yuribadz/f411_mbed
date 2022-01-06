/*
 * gpio_setup.h
 *
 *  Created on: 6 січ. 2022 р.
 *      Author: yurib
 */

#ifndef INC_CONFIGURATION_GPIO_CONFIG_H_
#define INC_CONFIGURATION_GPIO_CONFIG_H_
#include "stm32f4xx_hal.h"

#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

void GPIO_Init(void);

#endif /* INC_CONFIGURATION_GPIO_CONFIG_H_ */
