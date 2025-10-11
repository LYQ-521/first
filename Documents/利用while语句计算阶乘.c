#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y=1;
	while (x>=1){
		y*=x;
		x--;
    }
	
	printf("x!=%d",y);
	
	return 0;
}

