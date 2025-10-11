#include <stdio.h>

int main()
{
	int x;
	int y;
	// scanf("%d",&x);
	x=700;
	while (x>0){
		y=x%10;
		printf("%d",y);
		x/=10;
	}
	
	// printf("%d",x);
	
	return 0;
}
