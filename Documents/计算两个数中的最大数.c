#include <stdio.h>

int main()
{
	int x;
	int y;
	int max;
	
	printf("������������");
	scanf("%d %d",&x,&y);
	
	if(x>y){
		max=x;
	}
	else if(x==y){
		max=x;
	}
	else {
		max=y;
	}
	
	printf("��������������Ϊ%d",max);
	
	return 0;
}
