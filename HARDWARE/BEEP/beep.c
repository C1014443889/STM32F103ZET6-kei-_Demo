#include "beep.h"
#include "stm32f10x.h"



void beep_init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	/*使能时钟*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	/*初始化GPIO*/
	GPIO_InitStructure.GPIO_Mode =GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin= GPIO_Pin_8;
	GPIO_InitStructure.GPIO_Speed =GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
	
	GPIO_ResetBits(GPIOB,GPIO_Pin_8);//引脚电平设置为低电平，关闭蜂鸣器
}
