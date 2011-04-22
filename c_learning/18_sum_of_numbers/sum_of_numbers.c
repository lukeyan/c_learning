#include <stdio.h>
main()
{
	int a,n,count=1;
	long int sum=0,tn=0;
	printf("Pls input the two numbers:\n");
	scanf("%d,%d",&a,&n);
	//scanf("%d,%d",&a,&n);
	printf("what your input are:a=%d,n=%d\n",a,n);
	while(count<=n)
	{
		tn=tn+a;
		sum=sum+tn;
		a=a*10;
		++count;
		printf("%d",count);
	}
	printf("a+aa+aaa+...=%ld\n",sum);
	
}
