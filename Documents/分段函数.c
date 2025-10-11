#include <stdio.h>

int main()
{
	int x;
	int y;
	
	printf("请输入一个数字");
	scanf("%d",&x);
	
	if (x<0){
		y=-1;
	}
	else if(x==0){
		y=0;
	}
	else {
		y=2*x; 
	}
	
	printf("f=%d",y);
	
	return 0;
}
