/*============================================================================================
 * Module : LCD
 *
 * File Name : lcd.h
 *
 * Author: Abdullah Maher
 *
 * Description : Header File Of LCD Driver
 *
 * Created on: May 1, 2023
 =============================================================================================*/

#ifndef INC_LCD_H_
#define INC_LCD_H_

/*===============================================================================
 *                                Includes                                       *
 ================================================================================*/
#include "atmega32.h"


/*===============================================================================
 *                       Macros Configuration References                         *
 ================================================================================*/


/* LCD Data bits mode configuration, its value should be 4 or 8*/
#define LCD_DATA_BITS_MODE 4 /*Write 4 or 8 Bits Mode*/

#if((LCD_DATA_BITS_MODE != 4) && (LCD_DATA_BITS_MODE != 8))

#error "Number of Data bits should be equal to 4 or 8"

#endif


/* LCD HW Ports and Pins IDS */

/* @ref Port Number ID (gpio.h)*/
/* @ref Pin Number ID (gpio.h)*/

#define LCD_RS_PORT_ID                 GPIOA_ID
#define LCD_RS_PIN_ID                  GPIO_PIN1

#define LCD_E_PORT_ID                  GPIOA_ID
#define LCD_E_PIN_ID                   GPIO_PIN2

#define LCD_DATA_PORT_ID               GPIOA_ID

#if (LCD_DATA_BITS_MODE == 4)

#define LCD_DB4_PIN_ID                 GPIO_PIN3
#define LCD_DB5_PIN_ID                 GPIO_PIN4
#define LCD_DB6_PIN_ID                 GPIO_PIN5
#define LCD_DB7_PIN_ID                 GPIO_PIN6

#endif

/* LCD Commands */
#define LCD_CLEAR_LCD	                     0x01
#define LCD_GO_TO_HOME                       0x02
#define LCD_TWO_LINES_EIGHT_BITS_MODE        0x38
#define LCD_TWO_LINES_FOUR_BITS_MODE         0x28
#define LCD_TWO_LINES_FOUR_BITS_MODE_INIT1   0x33
#define LCD_TWO_LINES_FOUR_BITS_MODE_INIT2   0x32
#define LCD_CURSOR_OFF                       0x0C
#define LCD_CURSOR_ON                        0x0E
#define LCD_SET_CURSOR_LOCATION              0x80

/*===============================================================================
 *                                	   APIs 		   		                     *
 ================================================================================*/

/**===============================================================================
 * Function Name  : HAL_LCD_Init.
 * Brief          : Function To Initialization LCD.
 * Parameter (in) : None.
 * Return         : None.
 * Note           : None*/
void HAL_LCD_Init(void);

/**===============================================================================
 * Function Name  : HAL_LCD_SendCommand.
 * Brief          : Function To Send Command.
 * Parameter (in) : Command.
 * Return         : None.
 * Note           : None*/
void HAL_LCD_SendCommand(uint8_t a_command);

/**===============================================================================
 * Function Name  : HAL_LCD_DisplayCharacter.
 * Brief          : Function To Display Character on LCD.
 * Parameter (in) : character to display.
 * Return         : None.
 * Note           : None*/
void HAL_LCD_DisplayCharacter(uint8_t a_data);

/**===============================================================================
 * Function Name  : HAL_LCD_DisplayString.
 * Brief          : Function To Display String on LCD.
 * Parameter (in) : Pointer to String to Display.
 * Return         : None.
 * Note           : None*/
void HAL_LCD_DisplayString(const uint8_t * p_str);

/**===============================================================================
 * Function Name  : HAL_LCD_MoveCursor.
 * Brief          : Function To Move The Cursor.
 * Parameter (in) : Row Number.
 * Parameter (in) : Col Number.
 * Return         : None.
 * Note           : None*/
void HAL_LCD_MoveCursor(uint8_t a_row,uint8_t a_col);

/**===============================================================================
 * Function Name  : HAL_LCD_DisplayStringRowCol.
 * Brief          : Function To Display String on LCD in Certain Digit.
 * Parameter (in) : Row Number.
 * Parameter (in) : Col Number.
 * Parameter (in) : Pointer to String to Display.
 * Return         : None.
 * Note           : None*/
void HAL_LCD_DisplayStringRowCol(uint8_t a_row,uint8_t a_col,const uint8_t * p_str);

/**===============================================================================
 * Function Name  : HAL_LCD_ClearScreen.
 * Brief          : Function To Clear Screen.
 * Parameter (in) : None.
 * Return         : None.
 * Note           : None*/
void HAL_LCD_ClearScreen(void);

/**===============================================================================
 * Function Name  : HAL_LCD_IntgerToString.
 * Brief          : Function To Convert Integer To String.
 * Parameter (in) : The Integer Number.
 * Return         : None.
 * Note           : None*/
void HAL_LCD_IntgerToString(int32_t a_data);

#endif /* INC_LCD_H_ */
