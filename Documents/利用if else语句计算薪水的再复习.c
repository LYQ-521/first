#include <stdio.h> 

int main()
{
	int x;
	int y;
	const int z=50;
	
	printf("请输入您工作的时间");
	scanf("%d",&x);
	
	if(x<=z){
		y=x*15;
	}
	else{
		y=(x-z)*20+z*15;
	}
	printf("您的工资为%d元",y);
	
	return 0;
}
