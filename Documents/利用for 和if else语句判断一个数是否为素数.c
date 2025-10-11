#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y;
	
	int z=1;
	
	for (y=2;y<x;y++){
		if(x%y==0){   //注意：等号为:"=="
			z=0;
		}
	}
	if(z==0){       //注意：等号为:"=="
		printf("不是素数");
	}else{
		printf ("是素数"); 
	}
	
	return 0;
}


// 目前来看，所学的所有语句都可以嵌套 
