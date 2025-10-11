#include <stdio.h>

int main()
{
	int x;
	printf("请输入一个数");
	scanf("%d",&x);
	
	int f;
	
	if(x<0){
		f=-1;
	}
	if(x==0){
		f=0;
	}
	if(x>0){
		f=2*x;
	}
	
	printf("f=%d",f);
	
	return 0;
}
