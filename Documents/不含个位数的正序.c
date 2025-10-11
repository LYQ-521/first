#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int t;
	t=x;
	int y=1;
	int cnt=0;
	do{
		t/=10;
		y*=10;
	}while(t>9);
	
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
