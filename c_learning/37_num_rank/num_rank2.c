#include <stdio.h>
#define N 10
main()
{
	int i,j,min,tem,a[N];
	/* input data */
	printf("Pls input ten num: \n");
	for(i=0;i<N;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");

	/*sort ten num */
	for(i=0;i<N-1;i++)
	{
		min=i;
		for(j=i+1;j<N;j++)
			if(a[min]>a[j]) min=j;
		tem=a[i];
		a[i]=a[min];
		a[min]=tem;
	}

	/*outout data */
	printf("After sorted \n");
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
}
