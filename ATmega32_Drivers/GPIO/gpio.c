/*============================================================================================
 * Module : GPIO
 *
 * File Name : gpio.c
 *
 * Author: Abdullah Maher
 *
 * Description : Source File Of ATmega32 GPIO Driver
 *
 * Created on: May 1, 2023
 =============================================================================================*/

#include "gpio.h"

void MCAL_GPIO_PinInit(Config_t * p_Configuratin)
{
	/*
	 * Check if the input port number is greater than NUM_OF_PINS_PER_PORT.
	 * Or if the input pin number is greater than NUM_OF_PINS_PER_PORT.
	 */
	if((p_Configuratin->PinNumber >= NUM_OF_PINS) || (p_Configuratin->PORT >= NUM_OF_PORTS))
	{
		/* Do Nothing */
	}
	else
	{
		/* Setup the pin direction as Given */
		switch(p_Configuratin->PORT)
		{
		case GPIOA_ID:
			if(p_Configuratin->Direction == GPIO_PIN_OUTPUT)
			{
				SET_BIT(DDRA,(p_Configuratin->PinNumber));
			}
			else
			{
				CLEAR_BIT(DDRA,(p_Configuratin->PinNumber));
			}
			break;
		case GPIOB_ID:
			if(p_Configuratin->Direction == GPIO_PIN_OUTPUT)
			{
				SET_BIT(DDRB,(p_Configuratin->PinNumber));
			}
			else
			{
				CLEAR_BIT(DDRB,(p_Configuratin->PinNumber));
			}
			break;
		case GPIOC_ID:
			if(p_Configuratin->Direction == GPIO_PIN_OUTPUT)
			{
				SET_BIT(DDRC,(p_Configuratin->PinNumber));
			}
			else
			{
				CLEAR_BIT(DDRC,(p_Configuratin->PinNumber));
			}
			break;
		case GPIOD_ID:
			if(p_Configuratin->Direction == GPIO_PIN_OUTPUT)
			{
				SET_BIT(DDRD,(p_Configuratin->PinNumber));
			}
			else
			{
				CLEAR_BIT(DDRD,(p_Configuratin->PinNumber));
			}
			break;
		}
	}
}

void MCAL_GPIO_PortInit(Config_t * p_Configuratin)
{
	/*
	 * Check if the input port number is greater than NUM_OF_PINS_PER_PORT.
	 */
	if(p_Configuratin->PORT >= NUM_OF_PORTS)
	{
		/* Do Nothing */
	}
	else
	{
		/* Setup the pin direction as Given */
		switch(p_Configuratin->PORT)
		{
		case GPIOA_ID:
			DDRA = p_Configuratin->Direction;
			break;
		case GPIOB_ID:
			DDRB = p_Configuratin->Direction;
			break;
		case GPIOC_ID:
			DDRC = p_Configuratin->Direction;
			break;
		case GPIOD_ID:
			DDRD = p_Configuratin->Direction;
			break;
		}
	}
}

uint8_t MCAL_GPIO_ReadPin(uint8_t PORTx, uint8_t a_PinNumber)
{
	uint8_t pin_value = 0;

	/*
	 * Check if the input port number is greater than NUM_OF_PINS_PER_PORT.
	 * Or if the input pin number is greater than NUM_OF_PINS_PER_PORT.
	 */
	if(( a_PinNumber >= NUM_OF_PINS) || (PORTx >= NUM_OF_PORTS))
	{
		/* Do Nothing */
	}
	else
	{
		/* Read the pin value as Given */
		switch(PORTx)
		{
		case GPIOA_ID:
			if(BIT_IS_SET(PINA,a_PinNumber))
			{
				pin_value = LOGIC_HIGH;
			}
			else
			{
				pin_value = LOGIC_LOW;
			}
			break;
		case GPIOB_ID:
			if(BIT_IS_SET(PINB,a_PinNumber))
			{
				pin_value = LOGIC_HIGH;
			}
			else
			{
				pin_value = LOGIC_LOW;
			}
			break;
		case GPIOC_ID:
			if(BIT_IS_SET(PINC,a_PinNumber))
			{
				pin_value = LOGIC_HIGH;
			}
			else
			{
				pin_value = LOGIC_LOW;
			}
			break;
		case GPIOD_ID:
			if(BIT_IS_SET(PIND,a_PinNumber))
			{
				pin_value = LOGIC_HIGH;
			}
			else
			{
				pin_value = LOGIC_LOW;
			}
			break;
		}
	}

	return pin_value;
}

void MCAL_GPIO_WritePin(uint8_t PORTx, uint8_t a_PinNumber, uint8_t a_Value)
{
	/*
	 * Check if the input port number is greater than NUM_OF_PINS_PER_PORT.
	 * Or if the input pin number is greater than NUM_OF_PINS_PER_PORT.
	 */
	if((a_PinNumber >= NUM_OF_PINS) || (PORTx >= NUM_OF_PORTS))
	{
		/* Do Nothing */
	}
	else
	{
		/* Write the pin value as Given */
		switch(PORTx)
		{
		case GPIOA_ID:
			if(a_Value == LOGIC_HIGH)
			{
				SET_BIT(PORTA,a_PinNumber);
			}
			else
			{
				CLEAR_BIT(PORTA,a_PinNumber);
			}
			break;
		case GPIOB_ID:
			if(a_Value == LOGIC_HIGH)
			{
				SET_BIT(PORTB,a_PinNumber);
			}
			else
			{
				CLEAR_BIT(PORTB,a_PinNumber);
			}
			break;
		case GPIOC_ID:
			if(a_Value == LOGIC_HIGH)
			{
				SET_BIT(PORTC,a_PinNumber);
			}
			else
			{
				CLEAR_BIT(PORTC,a_PinNumber);
			}
			break;
		case GPIOD_ID:
			if(a_Value == LOGIC_HIGH)
			{
				SET_BIT(PORTD,a_PinNumber);
			}
			else
			{
				CLEAR_BIT(PORTD,a_PinNumber);
			}
			break;
		}
	}
}

uint8_t MCAL_GPIO_ReadPort(uint8_t PORTx)
{
	uint8_t port_value = 0;

	/*
	 * Check if the input number is greater than NUM_OF_PORTS.
	 */
	if(PORTx >= NUM_OF_PORTS)
	{
		/* Do Nothing */
	}
	else
	{
		/* Read the port value as Given */
		switch(PORTx)
		{
		case GPIOA_ID:
			port_value = PINA;
			break;
		case GPIOB_ID:
			port_value = PINB;
			break;
		case GPIOC_ID:
			port_value = PINC;
			break;
		case GPIOD_ID:
			port_value = PIND;
			break;
		}
	}

	return port_value;
}

void MCAL_GPIO_WritePort(uint8_t PORTx, uint8_t a_Value)
{
	/*
	 * Check if the input number is greater than NUM_OF_PORTS.
	 */
	if(PORTx >= NUM_OF_PORTS)
	{
		/* Do Nothing */
	}
	else
	{
		/* Write the port value as given */
		switch(PORTx)
		{
		case GPIOA_ID:
			PORTA = a_Value;
			break;
		case GPIOB_ID:
			PORTB = a_Value;
			break;
		case GPIOC_ID:
			PORTC = a_Value;
			break;
		case GPIOD_ID:
			PORTD = a_Value;
			break;
		}
	}
}
