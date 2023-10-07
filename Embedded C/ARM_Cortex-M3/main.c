/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Abdullah Maher
 * @brief          : Main program body
 ***************************************************************************** */
 #include "std_types.h"


/*GPIOA*/
#define GPIOA_BASE    0x40010800
#define GPIOA_CRL     *(vuint32_t *)(GPIOA_BASE + 0x00)
#define GPIOA_CRH     *(vuint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR     *(vuint32_t *)(GPIOA_BASE + 0x0C)
#define GPIOA_IDR     *(vuint32_t *)(GPIOA_BASE + 0x08)
#define GPIOA_BSRR    *(vuint32_t *)(GPIOA_BASE + 0x10)

/*GPIOB*/
#define GPIOB_BASE    0x40010C00
#define GPIOB_CRL     *(vuint32_t *)(GPIOB_BASE + 0x00)
#define GPIOB_CRH     *(vuint32_t *)(GPIOB_BASE + 0x04)
#define GPIOB_ODR     *(vuint32_t *)(GPIOB_BASE + 0x0C)
#define GPIOB_IDR     *(vuint32_t *)(GPIOB_BASE + 0x08)
#define GPIOB_BSRR    *(vuint32_t *)(GPIOB_BASE + 0x10)

/*RCC*/
#define RCC_BASE      0x40021000
#define RCC_CR        *(vuint32_t *)(RCC_BASE + 0x00)
#define RCC_APB2ENR   *(vuint32_t *)(RCC_BASE + 0x18)
#define RCC_CFGR      *(vuint32_t *)(RCC_BASE + 0x04)


void GPIO_Init(void)
{
	/*Set Pin1 PORTA as Floating Input*/
	GPIOA_CRL = (GPIOA_CRL & 0xFFFFFF0F)|(0x00000040);
	/*Set Pin13 PORTA as Floating Input*/
	GPIOA_CRH = (GPIOA_CRH & 0xFF0FFFFF)|(0x00400000);
	/*Set Pin1 PORTB as Pull Output with SLew Rate 10MH*/
	GPIOB_CRL = (GPIOB_CRL & 0xFFFFFF0F)|(0x000000010);
	/*Set Pin13 PORTB as Pull Output with SLew Rate 10MH*/
	GPIOB_CRH = (GPIOB_CRH & 0xFF0FFFFF)|(0x00100000);
}
void RCC_Init(void)
{
	/*IO port A clock enable*/
	RCC_APB2ENR |= (1<<2);
	/*IO port B clock enable*/
	RCC_APB2ENR |= (1<<3);
}

void delay(uint32_t time)
{
	uint32_t i , j;

	for (i = 0; i < time; i++)
	{
		for(j = 0; j <255; j++);
	}
}
int main(void)
{
	RCC_Init();
	GPIO_Init();

	while(1)
	{
		if(!(GPIOA_IDR &(1<<1)))
		{
			GPIOB_ODR ^= (1<<1);
			while(!(GPIOA_IDR &(1<<1)));
		}

		if((GPIOA_IDR & (1<<13)))
			GPIOB_ODR ^= (1<<13);

		delay(1);
	}
}

