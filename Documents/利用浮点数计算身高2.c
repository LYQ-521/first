#include <stdio.h>

int main()
{
	int foot;
	double inch;
	
	printf("����������ߵ�Ӣ�ߺ�Ӣ��");
	scanf("%d %lf",foot,inch);
	
	double x=(foot+inch/12)*0.3048;
	
	return 0;
}
