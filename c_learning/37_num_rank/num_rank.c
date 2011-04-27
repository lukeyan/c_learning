#include <stdio.h>
void max(int a,int b)
{
	int temp;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
}
void main()
{
	int i,j,temp;
	static int a[10]={10,2,3,58,21,15,14,16,72,18};
	for(i=1;i<=9;i++)
	{
		for(j=i;j<=9;j++)
		{
			if(a[j-1]>a[j])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("%5d",a[i]);
	}
}

