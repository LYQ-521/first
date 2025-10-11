#include <stdio.h>

int main()
{
	int x;
	printf("请输入一个数来猜一猜");
	scanf("%d",&x);
	const int y=16;
	
	do{
		if(x>y){
			printf("猜大了，再试一试吧\n");
			scanf("%d",&x);
		}
		if(x<y){
			printf("猜小了，再试一试吧\n");
			scanf("%d",&x);
		}
	}while(x!=y);
	printf("猜对了\n");
	
	printf("再见");
	
	return 0;
}

