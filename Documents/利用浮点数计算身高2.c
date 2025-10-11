#include <stdio.h>

int main()
{
	int foot;
	double inch;
	
	printf("请输入您身高的英尺和英寸");
	scanf("%d %lf",foot,inch);
	
	double x=(foot+inch/12)*0.3048;
	
	return 0;
}
