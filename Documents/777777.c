#include <stdio.h>
/*
        a:2
        2 3 4 5���ĸ�����ɲ��ظ�����λ�� 
        234 254......ÿ��������λ��,����ÿ����λ��֮���Կո����
		 
        

*/
int main()
{
	int a;
	scanf("%d",&a);
	int x,y,z;
	
	do{
		x=a++;
		y=x++;
		z=y++;
	}while(z<1);
	
	
	
	return 0;
}
