#include "uart.h"

unsigned char str[100]="Mohamed-Shaban";

void main(void)
{
	UART_SendString(str);
}