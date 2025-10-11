#include <stdio.h>

int main()
{
	int x;
	int f;
	
	printf("ÇëÊäÈë¸öÊý");
	scanf("%d",&x);
	
	if(x>0){
		f=1;
	}
	else if(x==0){
		f=0;
	}
	else if(x<0){
		f=2*x;
	}
	
	return 0;
}
