#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int max;
	
	printf("��������������");
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
	
	printf("���������е������Ϊ%d",max);
	
	return 0;
}
