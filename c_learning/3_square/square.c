#include <stdio.h>
#include <math.h>
main(){
	long int i,x,y,z;
	for(i=1;i<100000;i++)
	{
		x=sqrt(i+100);
		y=sqrt(i+268);
		if(x*x==i+100&&y*y==i+268)
			printf("\n%ld\n",i);
	
	}
}
