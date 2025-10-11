#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	
	printf("请输入您需要支付的金额(元)和您支付的金额(元)");
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(a<b){
		c=b-a;
		printf("找您%d(元)",c); 
	}
	
	if(a>b){
		d=a-b;
		printf("您还需要继续支付%d(元)",d);
	}
	
	if (a=b){
		printf("您已成功支付，感谢您的支持，欢迎下次光临！！！");
	}
	
	
	return 0;
}

