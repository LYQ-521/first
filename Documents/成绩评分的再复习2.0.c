#include <stdio.h>

int main()
{
	int x;
	int y;
	
	printf("���������ĳɼ�");
	scanf("%d",&x);
	
	y=x/10;
	
	if(y>=9){
		printf("A\n");
	}
	if(y==8){
		printf("B\n");
	}
	if(y==7){
		printf("C\n");
	}
	if(y==6){
		printf("D\n");
	}
	if(y<6){
		printf("������\n");
	}
	printf("�ټ�");
	
	return 0;
}
