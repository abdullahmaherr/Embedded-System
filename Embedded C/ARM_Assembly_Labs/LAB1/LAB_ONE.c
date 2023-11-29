/****************************************************************************
 * @file           : LAB_ONE.c
 * @author         : Abdullah Maher
 * @brief          : Assembly Labs
 ******************************************************************************/
 
 register int x = 5;
 
 void main(void)
 {
	 subtract();
 }
 
 void subtract(void)
 {
	 x -= 1;
	 if(x != 0)
		 subtract();
 }