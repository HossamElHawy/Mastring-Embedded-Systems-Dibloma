#include "uart.h"
unsigned char string_buffer[100] = "Learn-in-depth-Hossam";
unsigned char const stirng_buffer2[100] = "Learn-in-depth-Hossam";
void main(void)
{
    Uart_Send_String(&string_buffer[0]);
}
