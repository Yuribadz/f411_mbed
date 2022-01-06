/*
 * rotary_sensor_thread.c
 *
 *  Created on: 6 СЃС–С‡. 2022 СЂ.
 *      Author: yurib
 */

#include "rotary_sensor_thread.h"
#include "string.h"

osThreadId_t RotarySensorThreadHandle;
uint32_t RotarySensorThreadBuffer[128];
osStaticThreadDef_t RotarySensorThreadControlBlock;
const osThreadAttr_t RotarySensorThread_attributes = {
    .name = "RotarySensorThread",
    .cb_mem = &RotarySensorThreadControlBlock,
    .cb_size = sizeof(RotarySensorThreadControlBlock),
    .stack_mem = &RotarySensorThreadBuffer[0],
    .stack_size = sizeof(RotarySensorThreadBuffer),
    .priority = (osPriority_t)osPriorityAboveNormal7,
};

void rotarySensorTask(void *argument) {
  char msg[] = "Rotary Sensor thread\r\n";
  uint8_t i = 0U;
  for (;;) {
    for (i = 0U; i < 100U; ++i) {
      HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
      osDelay(100);
    }
    HAL_UART_Transmit_DMA(&huart2, (uint8_t *)msg, strlen(msg));
    osDelay(1000);
  }
}