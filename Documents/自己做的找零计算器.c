#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	
	printf("����������Ҫ֧���Ľ��(Ԫ)����֧���Ľ��(Ԫ)");
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(a<b){
		c=b-a;
		printf("����%d(Ԫ)",c); 
	}
	
	if(a>b){
		d=a-b;
		printf("������Ҫ����֧��%d(Ԫ)",d);
	}
	
	if (a=b){
		printf("���ѳɹ�֧������л����֧�֣���ӭ�´ι��٣�����");
	}
	
	
	return 0;
}

