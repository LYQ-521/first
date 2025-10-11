#include <stdio.h>

int main()
{
	const int x=50;
	int y;
	int z;
	
	printf("请输入您的工作时间");
	scanf("%d",&y);
	
	printf("您的工作时间为%d小时\n",y);
	
	if (y>x)
	z=(y-x)*20+x*15;
	else
	z=y*15; 
	
	printf("您的工资为%d元",z);
	
	return 0;
}

