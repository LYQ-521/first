#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y;
	
	for(y=1;x>0;x--){   //�Ժ�дforѭ������ʱ��Ҫע�������Ƿ���� 
		y*=x;
	}
	
	
	
	printf("x!=%d",y);
	
	return 0;
}

