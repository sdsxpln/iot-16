#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK战舰STM32开发板
//LED驱动代码	    
#define LED0 PCout(0)// PC0
#define LED1 PCout(1)// PC1	

void LED_Init(void);//初始化

		 				    
#endif
