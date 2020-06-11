#include <stdio.h>

void main(void)
{
	signed int x,y;
	x = (signed int)-1;
	y = (signed int)0xffffff80;

	printf(" -1 in hex is : %x\n", x);

	printf(" 0x80 in decimal  is : %d\n",y);
}
