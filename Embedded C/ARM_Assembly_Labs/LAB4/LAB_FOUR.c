/****************************************************************************
 * @file           : LAB_FOUR.c
 * @author         : Abdullah Maher
 * @brief          : Assembly Labs
 ******************************************************************************/
 
 int x = 5;
 
 void main(void)
 {
	__asm("mov 	R0,%0"
	: 				// Output Parameter
	: "r" (x)		// Input Parameter
	);
	
	subtract();
 }
 
 void subtract(void)
 {
	x -= 1;
	if(x != 0)
		subtract();
 }