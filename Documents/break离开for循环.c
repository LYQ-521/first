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
			break;    //ִ��break������ֱ���뿪�κ�ѭ�� 
		}
	}
	if(z==0){
		printf("��������");
	}
	else {
		printf("������");
	}
	
	return 0;
}
