#include <stdio.h> 

int main()
{
	int x;
	int y;
	const int z=50;
	
	printf("��������������ʱ��");
	scanf("%d",&x);
	
	if(x<=z){
		y=x*15;
	}
	else{
		y=(x-z)*20+z*15;
	}
	printf("���Ĺ���Ϊ%dԪ",y);
	
	return 0;
}
