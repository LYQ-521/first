#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y=1;
	int z;
	for(z=1;z<=x;z++){
		y*=z;
	}
	
	
	printf("x!=%d",y);
	
	return 0;
}
