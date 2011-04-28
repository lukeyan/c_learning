#include <stdio.h>
varfunc()
{
	int var=0;
	static int static_var=0;
	printf("\40:var equal %d \n",var);
	printf("\40:static var equal %d \n",static_var);
	printf("\n");
	var++;
	static_var++;
}
void main()
{
	int i;
	for(i=0;i<3;i++)
		varfunc();
}
