#include <stdio.h>

int main()
{
	int hour1,minture1;
	int hour2,minture2;
	
	printf("����������ʱ���");
	
	scanf("%d %d",&hour1,&minture1);
	scanf("%d %d",&hour2,&minture2);
	
	int x=hour2-hour1;
	int y=minture2-minture1;
	
	if(y<0){
		y=y+60;
		x=x-1;
	}
	
	printf("������ʱ��ε�ʱ���Ϊ%dСʱ%d���� ",x,y);
	
	return 0;
}
