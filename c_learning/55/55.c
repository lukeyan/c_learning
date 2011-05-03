#include "stdio.h"
main()
{
	int a,b;
	a=234;
	b=~a;
	printf("\40 The a's 1 complement(decimal) is %d\n",b);
	a=~a;
	printf("\40 The a's 1 complement(hexidecimal) is %x \n",a);
}
