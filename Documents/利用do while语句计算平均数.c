#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int n=0;
	int z;
	double t;
	do{
		if(x!=0){
		n++;
		z+=x;	
		}scanf("%d",&x);
		
	}while (x!=0);
	t=z/n;
	printf("��Щ����ƽ����Ϊ%f",t);
	
	return 0;
}
