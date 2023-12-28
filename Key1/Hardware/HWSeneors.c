#include "stm32f10x.h"

void HWSensor_Init(void)
{

   RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);		
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);		
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5|GPIO_Pin_4;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE);
//	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB, GPIO_PinSource5);
	
//	EXTI_InitTypeDef EXTI_InitStructure;					
//	EXTI_InitStructure.EXTI_Line = EXTI_Line5;					
//	EXTI_InitStructure.EXTI_LineCmd = ENABLE;				
//	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;			
//	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising;		
//	//EXTI_Init(&EXTI_InitStructure);								
//	
//	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);				
//																
//	NVIC_InitTypeDef NVIC_InitStructure;						
//	NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;	
//	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;				
//	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;	
//	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;			
//	NVIC_Init(&NVIC_InitStructure);		

}
//void EXTI9_5_IRQHandler(void)
//{
// if(EXTI_GetFlagStatus(EXTI_Line5)==SET)
// {
//  		if (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_5) == 1)
//		{
//         GPIO_ResetBits(GPIOC,GPIO_Pin_13);

//		}
//		else if (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_5) == 0)
//		{
//         GPIO_SetBits(GPIOC,GPIO_Pin_13);

//		}
//		EXTI_ClearITPendingBit(EXTI_Line5);	
// 
// }

//}
