#include <stdio.h>

int main()
{
	const int y=10;
	
	int x;
	
	printf("请输入一个数，猜猜是不是等于y:");
	scanf("%d",&x);
	
	int z;
	z=x-y;
	
	while(z>0){
		printf("你输入的数大于y,请重新输入一个数");
		scanf("%d",&x);
		z=x-y;
	}
	while(z<0){
		printf("您输入的数小于y,请重新输入一个数");
		scanf("%d",&x);
		z=x-y;
	}
	if(z==0){
		printf("您猜对了\n");
	}
	printf("再见");
	
	return 0;
}
