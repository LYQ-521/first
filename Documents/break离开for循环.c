#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int y=2;
	int z=1;
	for(;y<x;y++){
		if(x%y==0){
			z=0;
			break;    //执行break，可以直接离开任何循环 
		}
	}
	if(z==0){
		printf("不是素数");
	}
	else {
		printf("是素数");
	}
	
	return 0;
}
