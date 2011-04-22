#include <stdio.h>
main()
{
	int x,y,z,temp;
	printf("Pls input the value:\n");
	scanf("%d,%d,%d",&x,&y,&z);
	if (x>y)
	{temp=x;x=y;y=temp;}
	if(x>z)
	{temp=x;x=z;z=temp;}
	if(y>z)
	{temp=y;y=z;z=temp;}
	printf("From small to big one:\n%d %d %d",x,y,z);
}
