#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int min;
	if(x>y){
		min=y;
	}else{
		min=x;
	}
	int i;
	int d=0;
	for(i=1;i<min;i++){
		if(x%i==0){
		if(y%i==0){
			d=i;
		}	
		}
	}
	printf("%d��%d�����Լ��Ϊ%d",x,y,d);
	
	return 0;
}

