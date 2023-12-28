#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "CountSensor.h"
#include "LED.h"
#include "Key1.h"
int main(void)
{
	LED_Init();
	while(1)
	{
	
		Key1_Init();
		
	}

}
