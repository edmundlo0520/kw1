/*
 * nbiot.c
 *
 *  Created on: 2019¦~1¤ë25¤é
 *      Author: John
 */

#include "stm32l4xx_hal.h"
#include "stdio.h"
#include "nbiot.h"


extern UART_HandleTypeDef huart1;


void NBIOT_AT_Command_Send(void)
{
	HAL_StatusTypeDef status;
	char* ptr = "test";

	status = HAL_UART_Transmit(&huart1, (char*) ptr, strlen(ptr), 0xFF);
}
