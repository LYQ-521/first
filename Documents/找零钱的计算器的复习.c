#include <stdio.h>

int main()
{
	int x;
	int y;
	int z;
	
	printf("����Ҫ֧���Ľ��Ϊ");
	scanf("%d",&x);
	
	printf("��֧���Ľ��Ϊ");
	scanf("%d",&y);
	
	if(y>=x){
		z=y-x;
		printf("�������֧��������%dԪ",z);
	}
	else {
		z=x-y;
		printf("������Ҫ����֧��%dԪ",z);
	}
	
	
	return 0;
}
