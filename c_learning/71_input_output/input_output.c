#include <stdio.h>
#define N 5
struct student
{
	char num[6];
	char name[8];
	int score[4];
} stu[N];
input(stu)
struct student stu[];
{
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("\n Pls input %d of %d\n",i+1,N);
		printf("num:");
		scanf("%s",stu[i].num);
		printf("name:");
		scanf("%s",stu[i].name);
		for(j=0;j<3;j++)
		{
			printf("score %d.",j+1);
			scanf("%d",&stu[i].score[j]);
		}
		printf("\n");
	}
}
print(stu)
struct student stu[];
{
	int i,j;
	printf("\n No. Name sco1 sco2 sco3 \n");
	for(i=0;i<N;i++)
	{
		printf("%-6s%-10s",stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
			printf("%-8d",stu[i].score[j]);
		printf("\n");
	}
}
main()
{
	input();
	print();
}
