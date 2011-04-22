#include <stdio.h>
void main()
{
	long int i1,i2,i3,i4,i5;
	i1=10000;
	i2=17500;
	i3=27500;
	i4=33500;
	i5=39500;   /* Define the static value*/
	
	long int temp,incentive;
	printf("Pls input a number:\n");
	scanf("%ld",&temp);
	if(temp<=100000)
		{incentive=temp*0.1;}
	else if(temp<=200000)
		{incentive=10000+(temp-100000)*0.075;}
	else if(temp<=400000)
		{incentive=17500+(temp-200000)*0.05;}
	else if(temp<=600000)
		{incentive=27500+(temp-400000)*0.03;}
	else if(temp<=1000000)
		{incentive=33500+(temp-600000)*0.015;}
	else 
		{incentive=39500+(temp-1000000)*0.01;}
	printf("Your incentive is:\n");
	printf("%ld\n",incentive);

}	
