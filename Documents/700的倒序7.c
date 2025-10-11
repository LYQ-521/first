#include <stdio.h>

int main()
{
	int x;
	// scanf=("%d",&x);
	x=700;
	
	int y;
	while (x>0){
		y=x%10;
		// printf("%d",y);
		x/=10;
	}
	printf("%d",y);
	
	return 0;
}
