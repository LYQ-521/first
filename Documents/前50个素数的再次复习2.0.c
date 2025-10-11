#include <stdio.h>

int main()
{
	int x;
	int cnt=0;
	for(x=2;cnt<50;x++){
		int y;
		int z=1;
		for(y=2;x>y;y++){
			if(x%y==0){
				z=0;
			}
			if(z==1){
				printf("%d",x);
				cnt++;
				break;
			}
		}
	}
	
	
	
	return 0;
}
