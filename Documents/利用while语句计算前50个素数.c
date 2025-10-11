#include <stdio.h>

int main()
{
	int x;
	x=2;
	int z=0;
	
	while (z<=50){   //forÑ­»·Óï¾ä×ª»»ÎªwhileÑ­»·Óï¾ä 
		int y;
		int n=1;
		for(y=2;y<x;y++){
		
		if(x%y==0){
			n=0;
		}
	}
		if(n==1){
			printf("%d\n",x); 
			z++;
		}
	       x++;
	}
	
	return 0;
}
