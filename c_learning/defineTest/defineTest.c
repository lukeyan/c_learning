#include <stdio.h>

#define M (y*y+3*y)
main()
{
	int s,y;
	printf("input a number:\n");
	scanf("%d",&y);
	s=3*M;
	printf("s=%d\n",s);
}
