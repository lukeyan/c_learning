/*
 题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程
 　　　 找出1000以内的所有完数。
 1. 程序分析：请参照程序<--上页程序14.
 2.程序源代码：

 */
#include <stdio.h>
main()
{
	static int k[10];
	int i,j,n,s;
	for(j=2;j<1000;j++)
	{
		n=-1;
		s=j;
		for(i=1;i<j;i++)
		{
			if((j%i)==0)
			{
				n++;
				s=s-i;
				k[n]=i;
			}
		}
		if(s==0)
		{
			printf("%d is a wanshu",j);
			for(i=0;i<n;i++)
				printf("%d,",k[i]);
			printf("%d\n",k[n]);
		}
	}
}
