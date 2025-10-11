#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int max;
	
	printf("请输入三个数字");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
	if(a>c)
	max=a;
	else max=c;
	}
	
	if (a<b){
		if(b>c)
		max=b;
		else max=c;
	}
	
	printf("这三个数中的最大数为%d",max);
	
	return 0;
}
