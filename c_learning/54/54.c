#include "stdio.h"
main()
{
	unsigned a,b,c,d;
	scanf("%d",&a);
	b=a>>4;
	c=~(~0<<4);
	d=b&c;
	printf("%o\n%o\n",a,d);
}
