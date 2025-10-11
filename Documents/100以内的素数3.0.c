#include <stdio.h>

int main()
{
	int x;
	int y;
	int d;
	for(x=2;x<100;x++){
		d=1;
		for(y=2;y<x;y++){
		if(x%y==0){
			d=0;
			break;
		}
	}
	if(d==1){
		printf("%d",x);
		printf(" ");
	}
	}
	return 0;	
	}
	
	//return 0;
