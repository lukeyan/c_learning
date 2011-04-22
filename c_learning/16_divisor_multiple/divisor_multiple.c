#include <stdio.h>
main()
{
	int a,b,temp,num1,num2;
	printf("Pls input two numbers:\n");
	scanf("%d,%d",&num1,&num2);
	if(num1<num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	a=num1;b=num2;
	/*Why this part can make it?*/
	while(b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	printf("The biggest common divisor is:%d \n",a);
	printf("The smallest common multiple is:%d \n",num1*num2/a);
}
