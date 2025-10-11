#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x); 
	int y;
	int n=1;
	
	for(y=2;x>y;y++){
		if(x%y==0){    //注意：注意区分等号（==）和赋值号（=） 
			n=0;
		}
	}
	if(n==1){
		printf("是素数");
	}
	else {
		printf("不是素数");
	}
	
	return 0;
}

