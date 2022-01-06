/*
 * uart_thread.h
 *
 *  Created on: Jan 2, 2022
 *      Author: yurib
 */

#ifndef SRC_THREADS_ROTARY_SENSOR_THREAD_H_
#define SRC_THREADS_ROTARY_SENSOR_THREAD_H_

#include "cmsis_os.h"
#include "stm32f4xx_hal.h"
#include "usart_config.h"
#include "gpio_config.h"

typedef StaticTask_t osStaticThreadDef_t;
extern osThreadId_t RotarySensorThreadHandle;
extern uint32_t RotarySensorThreadBuffer[ 128 ];
extern osStaticThreadDef_t RotarySensorThreadControlBlock;
extern const osThreadAttr_t RotarySensorThread_attributes;

void rotarySensorTask(void *argument);
#endif /* SRC_THREADS_ROTARY_SENSOR_THREAD_H_ */
