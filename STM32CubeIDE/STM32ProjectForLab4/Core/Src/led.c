/*
 * led.c
 *
 *  Created on: Jan 27, 2024
 *      Author: Huy
 */
#include "led.h"

void BlinkRedLed(void)
{
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void BlinkYellowLed(void)
{
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}

void BlinkGreenLed(void)
{
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
}

void BlinkBlueLed(void)
{
	HAL_GPIO_TogglePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin);
}

void BlinkOrangeLed(void)
{
	HAL_GPIO_TogglePin(LED_ORANGE_GPIO_Port, LED_ORANGE_Pin);
}

