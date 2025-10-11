#include <stdio.h>

int main()
{
	int x;
	printf("请输入一个数");
	scanf("%d",&x);
	
	int n=0;
	
	while (x>0){
		x/=10;
		n++;
}	
	printf("%d",n);
	
	return 0;
}
