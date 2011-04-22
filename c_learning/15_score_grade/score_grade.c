#include <stdio.h>
main()
{
	int score;
	char grade;
	printf("Pls input your score:\n");
	scanf("%d",&score);
	grade=(score>=90)?'A':(score>=60?'B':'C');
	printf("%d belongs to %c\n",score,grade);
}
