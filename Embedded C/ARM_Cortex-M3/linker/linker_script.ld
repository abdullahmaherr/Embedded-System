/**
 ******************************************************************************
 * @file           : linker script.ld
 * @author         : Abdullah Maher
 * @brief          : linker script
 ***************************************************************************** */

/* Memories definition */
MEMORY
{
    ROM(RX)    :ORIGIN = 0x08000000,   LENGTH = 128K
    RAM(RWX)    :ORIGIN = 0x20000000,   LENGTH = 20K
}

/* Sections */
SECTIONS
{
	/* The program code and other data into "ROM" Rom type memory */
	.text : {
		*(.vectors*)
		*(.text*)
		_E_TEXT = . ;
	} > ROM
	
	/* Constant data into "ROM" Rom type memory */
  .rodata :
  {
    . = ALIGN(4);
    *(.rodata)         /* .rodata sections (constants, strings, etc.) */
    *(.rodata*)        /* .rodata* sections (constants, strings, etc.) */
    . = ALIGN(4);
  } >ROM

	/* Initialized data sections into "RAM" Ram type memory */
	.data : {
		_S_DATA = . ;
		*(.data)
		. = ALIGN(4) ;
		_E_DATA = . ;
	} > RAM AT> ROM

	/* Uninitialized data section into "RAM" Ram type memory */
	.bss : {
		_S_BSS = . ;
		*(.bss*)
		_E_BSS = . ;
		
		. = ALIGN(4);
		. = . + 0x1000 ;
		_E_STACK = . ;
		
	} > RAM

}