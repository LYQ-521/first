#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a;
	printf("我已经想好了一个1到100之间的数\n");
	do{
	printf("请猜猜这个1到100之间的数:");
	scanf("%d",&a);
	count++;
	if(a>count){
		printf("您猜的数大了\n");
	} else if(a<count){
		printf("您猜的数小了\n");
	}
	}
	while (a!=count);
	printf("您猜对了");
	
	return 0;
}
