#include <stdio.h>

int main()
{
	int x;
	printf("������һ����");
	scanf("%d",&x);
	int y=0;
	int z=0;
	
	do{
	if(x!=0){
	y+=x;
	z++;
	scanf("%d",&x);
	}
	}while(x!=0); 
	
	printf("ƽ����Ϊ%f",1.0*y/z);
	
	return 0;
}
