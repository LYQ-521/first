#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a;
	printf("���Ѿ������һ��1��100֮�����\n");
	do{
	printf("��²����1��100֮�����:");
	scanf("%d",&a);
	count++;
	if(a>count){
		printf("���µ�������\n");
	} else if(a<count){
		printf("���µ���С��\n");
	}
	}
	while (a!=count);
	printf("���¶���");
	
	return 0;
}
