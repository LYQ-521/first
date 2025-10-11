#include <stdio.h>

int main()
{
	int t1;
	int t2;
	
	printf("请输入金额(元)");
	scanf("%d",&t1);
	
	printf("请输入面额(元)");
	scanf("%d",&t2);
	
	int t=t2-t1;
	printf("找您%d(元)",t);
	
	return 0;
}
