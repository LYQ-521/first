#include <stdio.h>

int main()
{
	int x;
	printf("������һ����");
	scanf("%d",&x);
	
	int n=0;
	
	while (x>0){
		x/=10;
		n++;
}	
	printf("%d",n);
	
	return 0;
}
