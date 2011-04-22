/*
  题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在
  　　　 第10次落地时，共经过多少米？第10次反弹多高？
  1.程序分析：见下面注释
  2.程序源代码：

  */
#include <stdio.h>
main()
{
	float sn=100.0,hn=sn/2;
	int n;
	for(n=2;n<=10;n++)
	{
		sn=sn+2*hn;
		hn=hn/2;
	}
	printf("The total of road is %f\n",sn);
	printf("The tenth is %f menter\n",hn);
}

