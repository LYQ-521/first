#include <stdio.h>

int main()
{
	int x;
	
	printf("������һ����");
	scanf("%d",&x);
	
	const int y=2;
	
	switch (x){
		case 1:
			printf("A");
			break;
			
		case 1+1: 
	    	printf("B");
		    break;
		
		case 1+2:
			printf("C");
			break;
			
			default:
				printf("������");
				break;
	}
	
	return 0;
}
