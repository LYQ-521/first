#include <stdio.h>

int main()
{
	const int y=10;
	
	int x;
	
	printf("������һ�������²��ǲ��ǵ���y:");
	scanf("%d",&x);
	
	int z;
	z=x-y;
	
	while(z>0){
		printf("�������������y,����������һ����");
		scanf("%d",&x);
		z=x-y;
	}
	while(z<0){
		printf("���������С��y,����������һ����");
		scanf("%d",&x);
		z=x-y;
	}
	if(z==0){
		printf("���¶���\n");
	}
	printf("�ټ�");
	
	return 0;
}
