#include <stdio.h>

int main()
{
	int x;
	int f;
	
	printf("请输入一个x的值");
	scanf("%d",&x);
	
	if(x<0){
		f=-2;
	}
	else if(x==0){
		f=0;
	}
	else {
		f=2*x;
	}
	
	printf("f=%d",f);
	
	return 0;
}
