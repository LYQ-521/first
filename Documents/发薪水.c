#include <stdio.h>

int main()
{
	const int x=50;
	int y;
	
	printf("��������������ʱ��");
	scanf("%d",&y);
	
	printf("��������ʱ��Ϊ%dСʱ\n",y);
	
	if (y<=x)
	 
	printf("���Ĺ���Ϊ%dԪ",y*15);
    else
    printf("���Ĺ���Ϊ%dԪ",(y-x)*20+x*15);
	return 0;
}
