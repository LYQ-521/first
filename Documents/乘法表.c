#include <stdio.h>
//³Ë·¨±í 
int main()
{
	int x,y;
	y=1;
	int n;
	scanf("%d",&n);
	while(y<=n){
		x=1;
		
		while(x<=y){
		printf("%d*%d=%d",x,y,x*y);
		if(x*y<10){
			printf("   ");
		}else{
			printf("  ");
		}
			x++;
		}
		printf("\n");
		y++;
	}
	
	return 0;
}
