#include <stdio.h>

int main()
{
	int x;
	printf("�Ѿ�׼������һ������������һ���������²£�");
	scanf("%d",&x);
	
	int y=16;
	
	do{
	if(x>y){
		printf("���ˣ�������һ�Σ�");
		scanf("%d",&x);
	}
	if(x<y){
	printf("С�ˣ�������һ�Σ�");
		scanf("%d",&x);
		
	}
      }while (x!=y);     //��������if�������жϣ�������do  while ��佫if�ж����Ƕ����ѭ����
	 // ����if�ж�������������while��ѭ���������ж��Ƿ��ٴν����ж�ѭ�� 
	printf("�¶���");
	
	return 0;
}
