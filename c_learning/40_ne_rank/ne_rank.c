#include "stdio.h"
#define N 5
main()
{
	int a[N]={9,7,6,4,2},i,temp;
	printf("\n original array:\n");
	for (i=0;i<N;i++)
		printf("%5d",a[i]);
	for (i=0;i<N/2;i++)
	{
		temp=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=temp;
	}
	printf("\n sorted array:\n");
	for (i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");
}
