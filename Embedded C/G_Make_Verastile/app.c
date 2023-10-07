#include "uart.h"
unsigned char buff_string[50] = "Abdullah Maher";

void main(void)
{

UART_send_string(buff_string);

}