#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	
	printf("����������Ҫ֧���Ľ��(Ԫ):");
	scanf("%d",&a);
	printf("��������֧���Ľ��(Ԫ):");
	scanf("%d",&b);
	
	if (a<=b){
		c=b-a;
		printf("����%dԪ,��л���Ĺ���!!!\n",c);
	}else{
		d=a-b; 
		printf("������Ҫ����֧��%d(Ԫ)\n",d);
	}
	
	return 0;
}
