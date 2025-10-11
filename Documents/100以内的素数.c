#include <stdio.h>

int main()
{
	int x;
	for(x=2;x<100;x++){
		
		int z=1;
		
		int y;
		for(y=2;y<x;y++){
			if(x%y==0){
				z=0;
				break;
			}
		}
		if(z==1){
			printf("%d\n",x);
		}
	}
	
	
	
	
	printf("");
	
	return 0;
}
