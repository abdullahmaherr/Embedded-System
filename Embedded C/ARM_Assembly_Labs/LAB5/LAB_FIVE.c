/****************************************************************************
 * @file           : LAB_FIVE.c
 * @author         : Abdullah Maher
 * @brief          : Assembly Labs
 ******************************************************************************/
 
 int x = 5;
 int y = 3;
 int z;
 
 void main(void)
 {
	__asm("add %[out0], %[in0], %[in1]"
	: [out0]  "=r"  (z)			// Output Parameter
	: [in0]   "r"   (x),		// Input Parameter
	  [in1]   "r"   (y)			// Input Parameter
	);
	
	subtract();
 }
 
 void subtract(void)
 {
	z -= 1;
	if(x != 0)
		subtract();
 }