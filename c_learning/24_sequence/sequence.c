#include <stdio.h>
main()
{
	int i;
	float temp,a,b,sum;
	a=2;b=1;sum=0.0;
	for(i=1;i<=20;i++)
	{
		sum=sum+a/b;
		temp=a;
		a=a+b;
		b=temp;
	}
	printf("The first 20 sum is:%9.6f\n",sum);/*define how many number after the dot */
}

