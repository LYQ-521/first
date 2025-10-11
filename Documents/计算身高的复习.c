#include <stdio.h>

int main()
{
	int foot;
	int inch;
	
	printf("请输入您的身高的英尺和英寸");
	scanf("%d %d",&foot,&inch);
	
	double x=(foot+inch/12.0)*0.3048;
	printf("您的身高是%f",x); 
	
	return 0;
}
