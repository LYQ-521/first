#include <stdio.h>

int main()
{
	int x;
	int y;
	int z;
	int max;
	
	printf("������������");
	scanf("%d %d %d",&x,&y,&z);
	
	if(x>y){
		if(x>z)
		max=x;
		else max=z;
	}else{
	if(y>z)
		max=y;
		else
		max=z;
	}
	
	printf("��������������Ϊ%d",max);
	
	return 0;
}
