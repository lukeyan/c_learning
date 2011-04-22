#include <stdio.h>
#include "math.h"
int main()
{
	int n,i,sum=0;
	printf("Please input number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++) sum +=f(i);
	printf("sum=%d\n",sum);
	return 0;
}
