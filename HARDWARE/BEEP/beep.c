#include "beep.h"
#include "stm32f10x.h"



void beep_init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	/*ʹ��ʱ��*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	/*��ʼ��GPIO*/
	GPIO_InitStructure.GPIO_Mode =GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin= GPIO_Pin_8;
	GPIO_InitStructure.GPIO_Speed =GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
	
	GPIO_ResetBits(GPIOB,GPIO_Pin_8);//���ŵ�ƽ����Ϊ�͵�ƽ���رշ�����
}