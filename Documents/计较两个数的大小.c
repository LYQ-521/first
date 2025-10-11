#include <stdio.h>

int main()
{
	int max=1;
	int a;
	int b;
	
	printf("请输入两个数");
	scanf("%d %d",&a,&b);
	
	if (a>=b)
	max=a;
	else max=b;
	
	printf("这两个数的最大值为%d",max);
	
	return 0;
}
