#include <stdio.h>

int main()
{
	const int x=50;
	int y;
	int z;
	
	printf("���������Ĺ���ʱ��");
	scanf("%d",&y);
	
	printf("���Ĺ���ʱ��Ϊ%dСʱ\n",y);
	
	if (y>x)
	z=(y-x)*20+x*15;
	else
	z=y*15; 
	
	printf("���Ĺ���Ϊ%dԪ",z);
	
	return 0;
}

