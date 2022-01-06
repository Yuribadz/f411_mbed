/*
 * usart_config.h
 *
 *  Created on: 6 січ. 2022 р.
 *      Author: yurib
 */

#ifndef INC_CONFIGURATION_USART_CONFIG_H_
#define INC_CONFIGURATION_USART_CONFIG_H_

#include "stm32f4xx_hal.h"
#include "error.h"

extern UART_HandleTypeDef huart2;
void MX_USART2_UART_Init(void);

#endif /* INC_CONFIGURATION_USART_CONFIG_H_ */
