#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int t;
	int cnt=0;
	t=x;
	int d=0;
	while(t>9){
		t/=10;
		cnt++;
	}
	int y=pow(10,cnt);
	do{
	d=x/y;
	printf("%d",d);
	if(y>9){
		printf(" ");
	}
	x%=y;
	y/=10;
	}while(x>0);
	
	printf("\n");
	return 0;
}
