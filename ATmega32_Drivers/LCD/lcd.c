/*============================================================================================
 * Module : LCD
 *
 * File Name : lcd.c
 *
 * Author: Abdullah Maher
 *
 * Description : Source File Of LCD Driver
 *
 * Created on: May 1, 2023
 =============================================================================================*/
#include "lcd.h"
#include "gpio.h"
#include"atmega32.h"


void HAL_LCD_Init(void)
{
	/* Configure RS Pin */
	MCAL_GPIO_PinInit(LCD_RS_PORT_ID, LCD_RS_PIN_ID,GPIO_PIN_OUTPUT);

	/* Configure E Pin */
	MCAL_GPIO_PinInit(LCD_E_PORT_ID,LCD_E_PIN_ID, GPIO_PIN_OUTPUT);

	_delay_ms(20);/*Delay for Processing*/

#if(LCD_DATA_BITS_MODE == 8)

	/* Configure the data port as output port */
	MCAL_GPIO_PortInit(LCD_DATA_PORT_ID, GPIO_PORT_OUTPUT);

	/* use 2-lines LCD + 8-bits Data Mode + 5*7 dot display Mode */
	HAL_LCD_SendCommand(LCD_TWO_LINES_EIGHT_BITS_MODE);

#elif(LCD_DATA_BITS_MODE == 4)

	/* Configure 4 pins in the data port as output pins */
	MCAL_GPIO_PinInit(LCD_DATA_PORT_ID,LCD_DB4_PIN_ID, GPIO_PIN_OUTPUT);

	MCAL_GPIO_PinInit(LCD_DATA_PORT_ID,LCD_DB5_PIN_ID, GPIO_PIN_OUTPUT);

	MCAL_GPIO_PinInit(LCD_DATA_PORT_ID,LCD_DB6_PIN_ID, GPIO_PIN_OUTPUT);

	MCAL_GPIO_PinInit(LCD_DATA_PORT_ID,LCD_DB7_PIN_ID, GPIO_PIN_OUTPUT);

	/* Send for 4 bit initialization of LCD  */
	HAL_LCD_SendCommand(LCD_TWO_LINES_FOUR_BITS_MODE_INIT1);
	_delay_ms(1);/*Delay for Processing*/
	HAL_LCD_SendCommand(LCD_TWO_LINES_FOUR_BITS_MODE_INIT2);
	_delay_ms(1);/*Delay for Processing*/

	/* use 2-lines LCD + 4-bits Data Mode + 5*7 dot display Mode */
	HAL_LCD_SendCommand(LCD_TWO_LINES_FOUR_BITS_MODE);
	_delay_ms(1);/*Delay for Processing*/

#endif

	/*Cursor Off*/
	HAL_LCD_SendCommand(LCD_CURSOR_OFF);
	_delay_ms(1);/*Delay for Processing*/

	/*Clear Screen at The Beginning*/
	HAL_LCD_SendCommand(LCD_CLEAR_LCD);
	_delay_ms(1);/*Delay for Processing*/

}


void HAL_LCD_SendCommand(uint8_t a_command)
{
	MCAL_GPIO_WritePin(LCD_RS_PORT_ID, LCD_RS_PIN_ID, LOGIC_LOW);/*RS = 0 Send Command Mode */
	_delay_ms(1);/*Delay for Processing*/

	MCAL_GPIO_WritePin(LCD_E_PORT_ID, LCD_E_PIN_ID, LOGIC_HIGH);
	_delay_ms(1);/*Delay for Processing*/

#if(LCD_DATA_BITS_MODE == 8)
	MCAL_GPIO_WritePort(LCD_DATA_PORT_ID, a_command);
#elif(LCD_DATA_BITS_MODE == 4)

	/*Send Most 4 Bit*/
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB4_PIN_ID, GET_BIT(a_command,4));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB5_PIN_ID, GET_BIT(a_command,5));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB6_PIN_ID, GET_BIT(a_command,6));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB7_PIN_ID, GET_BIT(a_command,7));
	_delay_ms(1);/*Delay for Processing*/
	MCAL_GPIO_WritePin(LCD_E_PORT_ID, LCD_E_PIN_ID, LOGIC_LOW);
	_delay_ms(1);/*Delay for Processing*/

	MCAL_GPIO_WritePin(LCD_E_PORT_ID, LCD_E_PIN_ID, LOGIC_HIGH);

	/*Send Least 4 Bit*/
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB4_PIN_ID, GET_BIT(a_command,0));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB5_PIN_ID, GET_BIT(a_command,1));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB6_PIN_ID, GET_BIT(a_command,2));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB7_PIN_ID, GET_BIT(a_command,3));
#endif

	_delay_ms(1);/*Delay for Processing*/
	MCAL_GPIO_WritePin(LCD_E_PORT_ID, LCD_E_PIN_ID, LOGIC_LOW);
	_delay_ms(1);/*Delay for Processing*/
}

void HAL_LCD_DisplayCharacter(uint8_t a_data)
{
	MCAL_GPIO_WritePin(LCD_RS_PORT_ID, LCD_RS_PIN_ID, LOGIC_HIGH);/*RS = 1 Data Mode */
	_delay_ms(1);/*Delay for Processing*/

	MCAL_GPIO_WritePin(LCD_E_PORT_ID, LCD_E_PIN_ID, LOGIC_HIGH);/*RS = 1 Data Mode */
	_delay_ms(1);/*Delay for Processing*/

#if(LCD_DATA_BITS_MODE == 8)
	MCAL_GPIO_WritePort(LCD_DATA_PORT_ID, a_data);
#elif(LCD_DATA_BITS_MODE == 4)

	/*Send Most 4 Bit*/
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB4_PIN_ID, GET_BIT(a_data,4));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB5_PIN_ID, GET_BIT(a_data,5));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB6_PIN_ID, GET_BIT(a_data,6));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB7_PIN_ID, GET_BIT(a_data,7));
	_delay_ms(1);/*Delay for Processing*/
	MCAL_GPIO_WritePin(LCD_E_PORT_ID, LCD_E_PIN_ID, LOGIC_LOW);
	_delay_ms(1);/*Delay for Processing*/

	MCAL_GPIO_WritePin(LCD_E_PORT_ID, LCD_E_PIN_ID, LOGIC_HIGH);

	/*Send Least 4 Bit*/
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB4_PIN_ID, GET_BIT(a_data,0));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB5_PIN_ID, GET_BIT(a_data,1));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB6_PIN_ID, GET_BIT(a_data,2));
	MCAL_GPIO_WritePin(LCD_DATA_PORT_ID, LCD_DB7_PIN_ID, GET_BIT(a_data,3));
#endif

	_delay_ms(1);/*Delay for Processing*/
	MCAL_GPIO_WritePin(LCD_E_PORT_ID, LCD_E_PIN_ID, LOGIC_LOW);
	_delay_ms(1);/*Delay for Processing*/
}

void HAL_LCD_DisplayString(const uint8_t * p_str)
{
	while((*p_str) != '\0')
	{
		HAL_LCD_DisplayCharacter((*p_str));
		p_str++;
	}
}

void HAL_LCD_MoveCursor(uint8_t a_row,uint8_t a_col)
{
	uint8_t location;
	switch(a_row)
	{
	case 0:
		location = a_col;
		break;
	case 1:
		location = (a_col + 0x40);
		break;
	case 2:
		location = (a_col + 0x10);
		break;
	case 3:
		location = (a_col + 050);
		break;
	}
	/*Move Cursor To The Address */
	HAL_LCD_SendCommand(LCD_SET_CURSOR_LOCATION | location);
}

void HAL_LCD_DisplayStringRowCol(uint8_t a_row,uint8_t a_col,const uint8_t * p_str)
{
	HAL_LCD_MoveCursor(a_row, a_col);
	HAL_LCD_DisplayString(p_str);
}

void HAL_LCD_ClearScreen(void)
{
	HAL_LCD_SendCommand(LCD_CLEAR_LCD);
}

void HAL_LCD_IntgerToString(int32_t a_data)
{
	uint8_t buffer[16];
	itoa(a_data,buffer,10);/*The function ltoa() converts the long integer value from val into an ASCII representation*/
	HAL_LCD_DisplayString(buffer);
}

