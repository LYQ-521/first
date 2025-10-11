#include <stdio.h>

int main()
{
	int x;
	int y;
	int z;
	
	printf("您需要支付的金额为");
	scanf("%d",&x);
	
	printf("您支付的金额为");
	scanf("%d",&y);
	
	if(y>=x){
		z=y-x;
		printf("您已完成支付，找您%d元",z);
	}
	else {
		z=x-y;
		printf("您还需要继续支付%d元",z);
	}
	
	
	return 0;
}
