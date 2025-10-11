#include <stdio.h>

int main()
{
	int x;
	for(x=2;x<100;x++){
		int z=1;
		int y;
		for(y=2;x>y;y++){
			if(x%y==0){
				z=0;
			}
			if(z==1){
				printf("%d\n",x);     
				break;         //注意：需要注意这里要加上一个break 
			}
		}
	}
	return 0;
}
