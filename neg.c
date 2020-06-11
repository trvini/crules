#include <stdio.h>

void main(void)
{
	unsigned int ui_1;
	signed int x,y;

	x = (signed int)-1;
	y = (signed int)0xffffff80;

	ui_1 = 255;

	printf(" -1 in hex is : %x\n", x);

	printf(" 0x80 in decimal  is : %d\n",y);

	printf(" 255 unsigned int in hex is : %x\n",ui_1);
}
