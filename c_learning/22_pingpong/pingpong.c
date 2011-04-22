#include <stdio.h>
main()
{
	char i,j,k;
	for(i='x';i<='z';i++)
		for(j='x';j<='z';j++)
		{
			if(i!=j)
				for(k='x';k<='z';k++)
				{
					if(i!='x'&&k!='x'&k!='z')
						printf("Order is a--%c,b--%c,c--%c\n ",i,j,k);
				}
		}
}
