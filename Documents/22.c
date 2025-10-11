#include <stdio.h>
int main()
{
	
	printf("请输入身高的英尺和英寸");
	
	double foot=0;
	double inch=0;
	
	scanf("%lf %lf",&foot,&inch);
	
	
	printf("%f",(foot+inch/12)*0.3048);
	
	return 0;
}
