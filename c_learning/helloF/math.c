#include "math.h"
int f(int n)
{
	int t;
	if (n == 0 || n == 1) t=1;
	else t= n* (n-1);
	return (t);
}
