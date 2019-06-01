#ifndef _HEADER_H_
#define _HEADER_H_

#include<reg51.h>

extern void delay_ms(unsigned int); 	//delay fun.c
extern void io_write(int PORT ,int PIN,int VAL);		//write on led
extern void io_byte_write(int,int);			//Byte write into led
extern unsigned int  io_read(int ,int );					//read from switch
extern void lcd_data(unsigned char d);	//lcd data 
extern void lcd_cmd(unsigned char d);		//lcd command
extern void lcd_init(void);							//lcd initilization
extern void lcd_string(char *s);				//lcd string

#define LED1 0
#define LED2 1
#define LED3 2
#define LED4 3

#define abc 1 
#define def 1

#define PORT0 0
#define PORT1 1
#define PORT2 2
#define PORT3 3

/*#define PO0 0
#define PO1 1
#define PO2 2
#define PO3 3*/

#define HIGH  1
#define LOW   0

#endif