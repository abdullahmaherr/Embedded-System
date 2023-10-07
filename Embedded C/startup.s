/**
 ******************************************************************************
 * @file           : startup.s
 * @author         : Abdullah Maher
 * @brief          : startup
 ***************************************************************************** */



/* SRAM = 0x20000000 */

.section .vectors
  .word _E_STACK
  .word _Reset_Handler
  .word _Vector_Handler
  .word _Vector_Handler
  .word	_Vector_Handler
  .word	_Vector_Handler
  .word	_Vector_Handler
  .word	0
  .word	0
  .word	0
  .word	0
  .word	_Vector_Handler
  .word	_Vector_Handler
  .word	0
  .word	_Vector_Handler
  .word	_Vector_Handler
  .word	_Vector_Handler           		/* Window Watchdog interrupt                        */
  .word	_Vector_Handler            		/* PVD through EXTI line detection interrupt        */
  .word	_Vector_Handler         		/* Tamper interrupt                                 */
  .word	_Vector_Handler            		/* RTC global interrupt                             */
  .word	_Vector_Handler          		/* Flash global interrupt                           */
  .word	_Vector_Handler            		/* RCC global interrupt                             */
  .word	_Vector_Handler             	/* EXTI Line0 interrupt                             */
  .word	_Vector_Handler          		/* EXTI Line1 interrupt                             */
  .word	_Vector_Handler        			/* EXTI Line2 interrupt                             */
  .word	_Vector_Handler        			/* EXTI Line3 interrupt                             */
  .word	_Vector_Handler        			/* EXTI Line4 interrupt                             */
                                /* Until to 76 ISR*/

.section .text
_Reset_Handler:
    bl main
    b .

.thumb_func

_Vector_Handler:
    b _Reset_Handler