/*============================================================================================
 * Module : GPIO
 *
 * File Name : stm32f103x6.h
 *
 * Author: Abdullah Maher
 *
 * Description : Header File Of STM32F103x6
 *
 * Created on: Sep 1, 2023
 =============================================================================================*/

#ifndef INC_STM32F103X6_H_
#define INC_STM32F103X6_H_

/*===============================================================================
 *                                Includes                                       *
 ================================================================================*/

#include"stdlib.h"
#include"stdint.h"


/*===============================================================================
 *            	    	  Base addresses for Memories                            *
 ================================================================================*/
#define FLASH_MEMORY_BASE							0X08000000UL
#define SYSTEM_MEMORY_BASE							0X1FFFF000UL
#define SRAM_MEMORY_BASE							0X20000000UL

#define PERIPHERALS_BASE							0X08000000UL

#define CORTEX_M3_INTENRAL_PERIPHERALS_BASE			0X08000000UL

/*===============================================================================
 *            	   	  Base addresses for BUS Peripherals                         *
 ================================================================================*/

/********************************AHB Bus Peripherals******************************/
/*RCC*/
#define RCC_BASE									0x40021000

/********************************APB1 Bus Peripherals******************************/

#define USART2_BASE									0x40004400
/********************************APB2 Bus Peripherals******************************/

/*GPIO*/ /*Note That in LQFP48 GPIOA and GPIOB are fully included, GPIOC and GPIOD Partially Included, GPIOE Not Included*/
#define GPIOA_BASE									0x40010800
#define GPIOB_BASE									0x40010C00
#define GPIOC_BASE									0x40011000
#define GPIOD_BASE									0x40011400
#define GPIOE_BASE									0x40011800

/*EXTI*/
#define EXTI_BASE									0x40010400

/*AFIO*/
#define AFIO_BASE									0x40010000
/*===============================================================================
 *            	   				Peripheral Registers                             *
 ================================================================================*/
/*RCC*/
typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
}RCC_TypeDef;

/*AFIO*/
typedef struct
{
	volatile uint32_t EVCR;
	volatile uint32_t MAPR;
	volatile uint32_t EXTICR1;
	volatile uint32_t EXTICR2;
	volatile uint32_t EXTICR3;
	volatile uint32_t EXTICR4;
	uint32_t RESERVED0;
	volatile uint32_t MAPR2;
}AFIO_TypeDef;

/*GPIO*/
typedef struct
{
	volatile uint32_t CRL;
	volatile uint32_t CRH;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t BRR;
	volatile uint32_t LCKR;
}GPIO_TypeDef;

/*EXTI*/
typedef struct
{
	volatile uint32_t IMR;
	volatile uint32_t EMR;
	volatile uint32_t RTSR;
	volatile uint32_t FTSR;
	volatile uint32_t SWIER;
	volatile uint32_t PR;
}EXTI_TypeDef;

/*===============================================================================
 *            	   				Peripheral Instants                              *
 ================================================================================*/
/*RCC*/
#define RCC							((RCC_TypeDef *)(RCC_BASE))

/*AFIO*/
#define AFIO						((AFIO_TypeDef *)(AFIO_BASE))

/*GPIO*/
#define GPIOA						((GPIO_TypeDef *)(GPIOA_BASE))
#define GPIOB						((GPIO_TypeDef *)(GPIOB_BASE))
#define GPIOC						((GPIO_TypeDef *)(GPIOC_BASE))
#define GPIOD						((GPIO_TypeDef *)(GPIOD_BASE))
#define GPIOE						((GPIO_TypeDef *)(GPIOE_BASE))

/*EXTI*/
#define EXTI						((EXTI_TypeDef *)(EXTI_BASE))

/*===============================================================================
 *           		   	   	   Clock Enable Macros  		                     *
 ================================================================================*/

#define RCC_AFIO_CLK_EN()					(SET_BIT(RCC->APB2ENR,0))

#define RCC_GPIOA_CLK_EN()					(SET_BIT(RCC->APB2ENR,2))
#define RCC_GPIOB_CLK_EN()					(SET_BIT(RCC->APB2ENR,3))
#define RCC_GPIOC_CLK_EN()					(SET_BIT(RCC->APB2ENR,4))
#define RCC_GPIOD_CLK_EN()					(SET_BIT(RCC->APB2ENR,5))
#define RCC_GPIOE_CLK_EN()					(SET_BIT(RCC->APB2ENR,6))

/*===============================================================================
 *           		    	   	   Generic Macros  		  	                     *
 ================================================================================*/


#ifndef TRUE
#define TRUE (1u)
#endif

#ifndef FALSE
#define FALSE (0u)
#endif

#define NULL_PTR ((void*)0)

/* Set a Specific Bit in any Register*/
#define SET_BIT(REG,BIT) ((REG) |= (1<<BIT))

/* Clear a Specific Bit in any Register*/
#define CLEAR_BIT(REG,BIT) ((REG) &= (~(1<<BIT)))

/* Toggle a Specific Bit in any Register*/
#define TOGGLE_BIT(REG,BIT) ((REG) ^= (1<<BIT))

/* Check if a Specific Bit in any Register is Set*/
#define BIT_IS_SET(REG,BIT) ((REG) &= (1<<BIT))

/* Check if a Specific Bit in any Register is Cleared*/
#define BIT_IS_CLEAR(REG,BIT) (!((REG) &= (1<<BIT)))

/*Get a Specific BIT Value*/
#define GET_BIT(REG,BIT) (((REG) & (1<<BIT)) >> BIT)

/*Write a Specific Value on BIT*/
#define WRI_BIT(REG,BIT,DATA) ((REG) = ((REG) & (~(1<<BIT))) | (DATA<<BIT))

#endif /* INC_STM32F103X6_H_ */
