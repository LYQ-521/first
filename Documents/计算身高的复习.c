#include <stdio.h>

int main()
{
	int foot;
	int inch;
	
	printf("������������ߵ�Ӣ�ߺ�Ӣ��");
	scanf("%d %d",&foot,&inch);
	
	double x=(foot+inch/12.0)*0.3048;
	printf("���������%f",x); 
	
	return 0;
}
