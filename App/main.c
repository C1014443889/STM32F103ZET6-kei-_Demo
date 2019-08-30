#include "led.h"
#include "delay.h"
#include "beep.h"

/*未使用位带操作*/

int main(void)
{
	delay_init();
	led_init();
	beep_init();
	
	while(1)
	{
		
		LED1_ON;
		LED0_ON;
		beep_on;
		delay_ms(300);
		
		LED1_OFF;
		LED0_OFF;
		beep_off;
		delay_ms(300);
		
	}	
}