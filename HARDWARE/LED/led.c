#include "led.h"
#include "stm32f10x_rcc.h"

void led_init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	
	/* ʱ��ʹ��*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOE,ENABLE);
	
	/*GPIO��ʼ��*/
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;//�������
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_5; 
	GPIO_InitStructure.GPIO_Speed =GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOB,&GPIO_InitStructure);
	GPIO_Init(GPIOE,&GPIO_InitStructure);
	
	
	/*�������ŵ�ƽ*/
	GPIO_SetBits(GPIOB,GPIO_Pin_5);
	GPIO_SetBits(GPIOE,GPIO_Pin_5);
}






