#include "delay.h"
#include "stm32f10x.h"


void delay_init(void)
{
   u32 reload;
	
	SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);////ѡ���ⲿʱ��  HCLK/8
	reload=SystemCoreClock/8000000;				//ÿ���ӵļ�������,72M/8000000=9��9��/1us
	
	SysTick->CTRL|=0x10;   	//����SYSTICK�ж�,CTRLΪSysTick�Ŀ���״̬�Ĵ���
	SysTick->LOAD=reload; 							
	SysTick->CTRL|=0x01;   	//����SYSTICK    

	
	
}

void delay_ms(u16 nms)
{
	u32 t;
	SysTick->LOAD=9000*nms;//����ʱ�䣬9000��/1ms
	SysTick->VAL =0x0;//��ռ�����
	SysTick->CTRL=0x01;//ʹ��
	
	do 
	{
		t=SysTick->CTRL;//��ȡ��ǰ������ֵ
	}
	while(!(t&(1<<16)));//�ж�ʱ���Ƿ񵽴�,CTRL��16λΪ������־λ
	SysTick->CTRL=0x0;//�رգ���ʹ�ܣ�
	SysTick->VAL=0x0;//��ռ�����
	
	
	
	
	
}