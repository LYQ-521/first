#include <stdio.h>

int main()
{
	int x;
	const double y=16.6;
	printf("���Ѿ�׼������");
	printf("������һ���������²°ɣ�");
	scanf("%d",&x);
	int n=0;
	n++;
	if(x>y){
		do{
		printf("����������ִ��ˣ�������������һ�����ְ�");
		scanf("%d",&x);
		n++;
	}while (x>y);
	}
	while (x<y){
		printf("�����������С�ˣ�������������һ�����ְ�");
		scanf("%d",&x);
		n++;
	}
	printf("���¶���,һ��������%d��",n);
	
	return 0;
}
