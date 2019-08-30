#include "delay.h"
#include "stm32f10x.h"


void delay_init(void)
{
   u32 reload;
	
	SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);////选择外部时钟  HCLK/8
	reload=SystemCoreClock/8000000;				//每秒钟的计数次数,72M/8000000=9，9次/1us
	
	SysTick->CTRL|=0x10;   	//开启SYSTICK中断,CTRL为SysTick的控制状态寄存器
	SysTick->LOAD=reload; 							
	SysTick->CTRL|=0x01;   	//开启SYSTICK    

	
	
}

void delay_ms(u16 nms)
{
	u32 t;
	SysTick->LOAD=9000*nms;//加载时间，9000次/1ms
	SysTick->VAL =0x0;//清空计数器
	SysTick->CTRL=0x01;//使能
	
	do 
	{
		t=SysTick->CTRL;//读取当前倒计数值
	}
	while(!(t&(1<<16)));//判断时间是否到达,CTRL第16位为计数标志位
	SysTick->CTRL=0x0;//关闭（不使能）
	SysTick->VAL=0x0;//清空计数器
	
	
	
	
	
}