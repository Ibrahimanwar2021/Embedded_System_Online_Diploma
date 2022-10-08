#include "uart.h"

unsigned char string_buffer[100] = "learn-in-depth: <Ibrahim>";

void main(void)
{
	Uart_send_string(string_buffer);
}