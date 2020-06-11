#include <stdio.h>

void main(void)
{
	unsigned char uc1;
	signed char sc1,sc2;

        sc1 = (signed char)-1;
	sc2 = (signed char)-128;

	uc1 = 255;

	printf(" -1 in hex is : %4x\n", sc1);

	printf(" -128  in hex  is : %x\n",sc2);

	printf(" 255 unsigned int in hex is : %x\n",uc1);
}
// bhpe opened this file
