/****************************************************************************
 * @file           : LAB_ONE.c
 * @author         : Abdullah Maher
 * @brief          : Assembly Labs
 ******************************************************************************/
 
 
 RESET		;CPU Entery Point
		mov	r0, #5
		bl	main
				
		
 main
		bl	subtract 
		bl	termination
		
 subtract

		sub	r0, r0, #1
		cmp	r0, #0
		bne subtract
		bx	lr		; mov	pc,lr

 termination