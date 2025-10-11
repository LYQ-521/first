#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y;
	
	for(y=1;x>0;x--){   //以后写for循环语句的时候要注意条件是否合理 
		y*=x;
	}
	
	
	
	printf("x!=%d",y);
	
	return 0;
}

