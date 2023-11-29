/****************************************************************************
 * @file           : startup.c
 * @author         : Abdullah Maher
 * @brief          : startup
 ***************************************************************************** */
 
 #include"std_types.h"
 
 /* Prototypes */
 void Reset_Handler();
 void NMI_Handler()__attribute__((weak, alias("Default_Handler")));;
 void HardFault_Handler()__attribute__((weak, alias("Default_Handler")));;
 void MemManage_Handler()__attribute__((weak, alias("Default_Handler")));;
 void BusFault_Handler()__attribute__((weak, alias("Default_Handler")));;
 void UsageFault_Handler()__attribute__((weak, alias("Default_Handler")));;
  /* Until The 67 Interrupts..... */
 
 extern int main(void);
 
 extern uint32_t _E_TEXT;
 extern uint32_t _S_DATA;
 extern uint32_t _E_DATA;
 extern uint32_t _S_BSS;
 extern uint32_t _E_BSS;
 extern uint32_t _E_STACK;
 
 
 uint32_t vectors[]__attribute__((section(".vectors"))) = {
	(uint32_t) &_E_STACK,
	(uint32_t) &Reset_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &HardFault_Handler,
	(uint32_t) &MemManage_Handler,
	(uint32_t) &BusFault_Handler,
	(uint32_t) &UsageFault_Handler,
 
 };

 
  void Default_Handler()
 {
	 Reset_Handler();
 }
 
 
 
  void Reset_Handler()
  {
	  /*NOTE that _E_DATA, _S_DATA are not variable but Symbols */
	  /*Copy .data From FLASH to SRAM*/
	  uint32_t Data_Size = (uint8_t *)(&_E_DATA) - (uint8_t *)(&_S_DATA);
	  uint8_t * p_src = (uint8_t *)(&_E_TEXT);
	  uint8_t * p_dst = (uint8_t *)(&_S_DATA);
	  for(sint32_t i = 0; i < Data_Size; i++)
	  {
		  *((uint8_t *)p_dst++) = *((uint8_t *)p_src++);
	  }		  
	  
	  /* Initilization of .bss Section With Zero*/
	  uint32_t BSS_Size = (uint8_t *)(&_E_BSS) - (uint8_t *)(&_S_BSS);
	  p_dst = (uint8_t *)(&_S_BSS);
	  for(sint32_t i = 0; i < Data_Size; i++)
	  {
		  *((uint8_t *) p_dst++) = ((uint8_t)0);
	  }	
	  
	  /*Jump to the main */
	  main();
  }