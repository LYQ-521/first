#include <stdio.h>

int main()
{
	int x;
	int f;
	
	printf("������һ��x��ֵ");
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
