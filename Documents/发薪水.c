#include <stdio.h>

int main()
{
	const int x=50;
	int y;
	
	printf("请输入您工作的时间");
	scanf("%d",&y);
	
	printf("您工作的时间为%d小时\n",y);
	
	if (y<=x)
	 
	printf("您的工资为%d元",y*15);
    else
    printf("您的工资为%d元",(y-x)*20+x*15);
	return 0;
}
