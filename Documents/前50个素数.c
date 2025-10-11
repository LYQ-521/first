#include <stdio.h>

int main()
{
	int x;
	int m=0;
	for(x=2;m<=50;x++){
	int n=1;
	
	int y;
	for(y=2;y<x;y++){    //每一轮大的for循环都会重新定义一次y,重新开始一次for循环，重新赋值一次y为2 
		if(x%y==0){
			n=0;
			break;    //在这里，break可以带，也可以不带，并不影响 
		}
	}
	if(n==1){
		printf("%d\n",x);
		m++;
	}
}
	
	return 0;
}
