#include "uart.h"
#define UART0DR *((volatile unsigned int* const)((unsigned int *)0x101f1000))


void UART_send_string(unsigned char *P_TX_string)
{
while(*P_TX_string != '\0')
{
UART0DR = (unsigned int)(*P_TX_string);
P_TX_string++;
}
}