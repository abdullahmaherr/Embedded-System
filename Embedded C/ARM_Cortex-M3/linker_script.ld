/**
 ******************************************************************************
 * @file           : linker script.ld
 * @author         : Abdullah Maher
 * @brief          : linker script
 ***************************************************************************** */


MEMORY
{
    FLASH(RX)    :ORIGIN = 0x08000000,   LENGTH = 128K
    SRAM(RWX)    :ORIGIN = 0x20000000,   LENGTH = 20K
}


SECTIONS
{
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_TEXT = . ;
	} > FLASH

	.data : {
		_S_DATA = . ;
		*(.data)
		. = ALIGN(4) ;
		_E_DATA = . ;
	} > SRAM AT> FLASH

	.bss : {
		_S_BSS = . ;
		*(.bss*)
		_E_BSS = . ;
		
		. = ALIGN(4);
		. = . + 0x1000 ;
		_E_STACK = . ;
		
	} > SRAM

}