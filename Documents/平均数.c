#include <stdio.h>

int main()
{
	int a,b;
	
	printf("请输入两个数");
	scanf("%d %d",&a,&b);
	
	double c=(a+b)/2.0;
	printf("这两个数的平均数是%f",c);
	
	return 0;
}
