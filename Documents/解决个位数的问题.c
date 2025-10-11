#include <stdio.h>                                        
#include <math.h>     
int main()
{
	int x;
	scanf("%d",&x);
	int t;
	t=x;

	int cnt=0;
	while(t>9){
		t/=10;
		cnt++;
	}
	int y=pow(10,cnt);
	
	int d;
	do{
		d=x/y;
		printf("%d",d);
		if(y>9)
			printf(" ");
		x%=y;
		y/=10;
	}while(y>0);
	
	return 0;
}
