/*
 * thread_setup.c
 *
 *  Created on: Jan 2, 2022
 *      Author: yurib
 */


#include "os_setup.h"
#include "cmsis_os.h"
#include "rotary_sensor_thread.h"

void setup_threads(void)
{
	osKernelInitialize();
	RotarySensorThreadHandle = osThreadNew(rotarySensorTask, NULL, &RotarySensorThread_attributes);
	osKernelStart();
}
