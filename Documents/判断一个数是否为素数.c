#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x); 
	int y;
	int n=1;
	
	for(y=2;x>y;y++){
		if(x%y==0){    //ע�⣺ע�����ֵȺţ�==���͸�ֵ�ţ�=�� 
			n=0;
		}
	}
	if(n==1){
		printf("������");
	}
	else {
		printf("��������");
	}
	
	return 0;
}

