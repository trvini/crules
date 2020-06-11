#include <stdio.h>

void main(void)
{
	unsigned int ui1;
	unsigned short us1;
	signed char sc1,sc2;
	signed short ss1;

        sc1 = (signed char)-3;
	sc2 = (signed char)-128;
	ss1 = (signed short)-32768;

	ui1 = 65535;
        us1 = 255;

	printf(" -3 in hex is : %x\n", sc1);

	printf(" -128  in hex  is : %x\n, size of char is : %d\n", (sc2 &0xff), sizeof(sc2));

	printf(" 255 unsigned short in hex is : %x\n, size of short is : %d\n",us1, sizeof(us1));

	printf(" 255 unsigned int in hex is : %x\n, size of int is : %d\n",ui1, sizeof(ui1));

	printf(" -32768  signed short in hex is : %x\n, size of signed short  is : %d\n",ss1, sizeof(ss1));
}
