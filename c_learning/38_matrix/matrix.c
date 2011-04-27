#include "stdio.h"
void main()
{
	int a[3][3],sum,i,j;
	printf("Pls input 9 numbers:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%5d",a[i-1][j-1]);
		}
		printf("\n");
	}
	sum=a[0][0]+a[2][2]+a[1][1];
	printf("\n\n sum is:%5d",sum);
}

