#include <stdio.h>

int main()

{
	int x;
	int n=0;
	
	for(x=2;n<50;x++){
	
	//scanf("%d",&x);
	int y;
	int z=1;
	
	for(y=2;y<x;y++){
		if(x%y==0){
			z=0;
			break;
		}
	}
	if(z==1){
		printf("%d\n",x);
		n++;
	}
}
      printf("\n");

	return 0;
}

