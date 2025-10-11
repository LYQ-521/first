#include <stdio.h>

int main()
{
	int x;
	printf("请输入一个数");
	scanf("%d",&x);
	
	int y; 
	y=x/10;
	
	if(y==0){
		printf("一位数");	
	}
	else if(10>y>0){
		printf("两位数");
	}
	else if(10<=y){
		printf("三位数");
	}
	return 0;
}
