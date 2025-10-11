#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y=1;
	
	for(;x>=1;x--){
		y*=x;
	}
	
	
	printf("x!=%d",y);
	
	return 0;
}


