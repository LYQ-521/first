#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y;
	
	for(y=1;x>=1;x--){
		y*=x;
	}
	
	printf("x!=%d",y);
	
	return 0;
}

