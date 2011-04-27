#include <stdio.h>
main()
{
	int a[11]={1,4,6,9,13,16,19,28,40,100};
	int i,j,t,temp1,temp2,end;
	printf("Pls input the new num:\n");
	scanf("%d",&t);
	if(t>a[9])
		a[10]=t;
	else
	{
		for(i=0;i<10;i++)
		{
			if(a[i]>t)
			{
				temp1=a[i];
				a[i]=t;
				for(j=i+1;j<11;j++)
				{
					temp2=a[j];
					a[j]=temp1;
					temp1=temp2;
				}
				break;
			}
		}
	}
	for(i=0;i<11;i++)
		printf("%6d",a[i]);
}
