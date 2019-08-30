#ifndef _BEEP_H
#define _BEEP_H

#define beep_off GPIO_ResetBits(GPIOB,GPIO_Pin_8)
#define beep_on  GPIO_SetBits(GPIOB,GPIO_Pin_8)

void beep_init(void);

#endif