#include <stdio.h>

int main()
{
	int x;
	printf("������һ��������һ��");
	scanf("%d",&x);
	const int y=16;
	
	do{
		if(x>y){
			printf("�´��ˣ�����һ�԰�\n");
			scanf("%d",&x);
		}
		if(x<y){
			printf("��С�ˣ�����һ�԰�\n");
			scanf("%d",&x);
		}
	}while(x!=y);
	printf("�¶���\n");
	
	printf("�ټ�");
	
	return 0;
}

