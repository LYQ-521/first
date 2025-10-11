#include <stdio.h>

int main()
{
	int x;
	int y;
	int max;
	
	printf("请输入两个数");
	scanf("%d %d",&x,&y);
	
	if(x>y){
		max=x;
	}
	else if(x==y){
		max=x;
	}
	else {
		max=y;
	}
	
	printf("这两个数中最大的为%d",max);
	
	return 0;
}
