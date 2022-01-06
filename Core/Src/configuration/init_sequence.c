/*
 * init_sequence.c
 *
 *  Created on: 6 січ. 2022 р.
 *      Author: yurib
 */

#include <cmsis_os.h>
#include <gpio_config.h>
#include "os_setup.h"
#include "clock_config.h"
#include "dma_config.h"
#include "usart_config.h"

void init_seq(void)
{
	  HAL_Init();
	  SystemClock_Config();
	  DMA_Init();
	  GPIO_Init();
	  MX_USART2_UART_Init();
	  setup_threads();
}
