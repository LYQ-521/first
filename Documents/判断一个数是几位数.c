#include <stdio.h>

int main()
{
	int x;
	printf("������һ����");
	scanf("%d",&x);
	
	int y; 
	y=x/10;
	
	if(y==0){
		printf("һλ��");	
	}
	else if(10>y>0){
		printf("��λ��");
	}
	else if(10<=y){
		printf("��λ��");
	}
	return 0;
}
