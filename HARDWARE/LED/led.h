#ifndef _LED_H
#define _LED_H

#define LED1_OFF  GPIO_SetBits(GPIOE,GPIO_Pin_5);
#define LED1_ON  GPIO_ResetBits(GPIOE,GPIO_Pin_5);
#define LED0_OFF  GPIO_SetBits(GPIOB,GPIO_Pin_5);
#define LED0_ON  GPIO_ResetBits(GPIOB,GPIO_Pin_5);


void led_init(void);


#endif