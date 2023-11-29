/****************************************************************************
 * @file           : LAB_TWO.c
 * @author         : Abdullah Maher
 * @brief          : Assembly Labs
 ******************************************************************************/
 
 RESET			;CPU Entery Point
		mov		r0, #5
		bl		main
				
		
 main
		mov		r2, #0x100
		str		r0, [r2]
		lsr		r3, [r2]
		STRB	r0, [r2,,#0x1]
		STRB	r0, [r2,,#0x2]
		STRB	r0, [r2,,#0x3]
		bl		termination
		
 subtract

		sub		r0, r0, #1
		cmp		r0, #0
		bne 	subtract
		bx		lr		;mov	pc,lr

 termination