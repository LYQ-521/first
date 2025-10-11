#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	
	printf("请输入您需要支付的金额(元):");
	scanf("%d",&a);
	printf("请输入您支付的金额(元):");
	scanf("%d",&b);
	
	if (a<=b){
		c=b-a;
		printf("找您%d元,感谢您的光临!!!\n",c);
	}else{
		d=a-b; 
		printf("您还需要继续支付%d(元)\n",d);
	}
	
	return 0;
}
