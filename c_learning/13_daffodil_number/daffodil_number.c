#include <stdio.h>
main()
{
	int i,j,k,n;
	printf("'water flower' number is:\n");
		for(n=100;n<1000;n++)
		{
			i=n/100;
			j=n/10%10;
			k=n%10;
			/*seperate hundred,decade,unit number */
			if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
			{printf("%-5d\n",n);}
		}
}

