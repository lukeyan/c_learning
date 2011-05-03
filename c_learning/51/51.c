#include "stdio.h"
main()
{
	int a,b;
	a=077;
	b=a&3;
	printf("\40: The a & b (decimal) is %d\n",b);
	b&=7;
	printf("\40: The a & b (decimal) is %d\n",b);
}
