#include <stdio.h>

int main()
{
	int x;
	int y;
	int z;
	int max;
	
	printf("请输入三个数");
	scanf("%d %d %d",&x,&y,&z);
	
	if(x>y){
		if(x>z)
		max=x;
		else max=z;
	}else{
	if(y>z)
		max=y;
		else
		max=z;
	}
	
	printf("这三个数中最大的为%d",max);
	
	return 0;
}
