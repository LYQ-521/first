#include <stdio.h>

int main()
{
	printf("请输入身高的英尺和英寸");
	 
	 int foot;
	 int inch ;
	 
	scanf("%d %d",&foot,&inch);
	
	printf("身高是%d",(foot+inch/12)*0.3048); 
	
	return 0;
}
