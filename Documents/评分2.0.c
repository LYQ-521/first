#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int y;
	y=x/10;
	
	switch(y){
		case 10:
		case 9:
			printf("A");
			break;
	
		case 8:
			printf("B");
			break;
			
		case 7:
			printf("C");
			break;
	
		case 6:
			printf("D");
			break;
			
			default:
				printf("²»¼°¸ñ");
				break; 
	}
	
	return 0;
}
