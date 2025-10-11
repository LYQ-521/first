#include <stdio.h>

int main()
{
	const int x=60;
	int y;
	
	printf("请输入您的成绩");
	scanf("%d",&y);
	
	printf("您的成绩为%d\n",y);
	
	if (y>x) 
	    printf("恭喜您，您的成绩合格了\n");
	
	else 
	    printf("很遗憾，您的成绩没有合格\n");
	
	printf("再见\n");
	
	return 0;
}
