#include <stdio.h>

int main()
{
	int x=13542;
	int d;
	int t=0;
	do{
		d=x%10;
		printf("%d",d);
		t=t*10+d;    //�����t��Ҫ���г�ʼ�� 
		x/=10;
		
	}while(x>0);     //����ѭ������֮��X��ֵΪ0�� 
	x=t;             //���� t=t*10+d�����ֵ���ʽ��������X���и�ֵ 
	printf("\n");
	int y;
	do{
		y=x%10;
		printf("%d",y);
		if(x>9){
			printf(" ");   //���ĩβ2�����пո������ 
		}
		x/=10;
	}while(x>0);
	printf("\n");
	
	return 0;
}
