#include <stdio.h>

int main()
{
	int x;
	const double y=16.6;
	printf("我已经准备好了");
	printf("请输入一个数字来猜猜吧：");
	scanf("%d",&x);
	int n=0;
	n++;
	if(x>y){
		do{
		printf("您输入的数字大了，请重新再输入一个数字吧");
		scanf("%d",&x);
		n++;
	}while (x>y);
	}
	while (x<y){
		printf("您输入的数字小了，请重新再输入一个数字吧");
		scanf("%d",&x);
		n++;
	}
	printf("您猜对了,一共花费了%d次",n);
	
	return 0;
}
