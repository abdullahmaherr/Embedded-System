/****************************************************************************
 * @file           : LAB_THREE.c
 * @author         : Abdullah Maher
 * @brief          : Assembly Labs
 ******************************************************************************/
 
 int x = 0;
 
 void main(void)
 {
	__asm("mov 	%0,#0x0005"
	: "=r" (x)// Output Parameter
	);
	
	subtract();
 }
 
 void subtract(void)
 {
	x -= 1;
	if(x != 0)
		subtract();
 }