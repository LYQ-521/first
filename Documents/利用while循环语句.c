#include <stdio.h>

int main()
{
	int x;
	printf("请输入您的成绩");
	scanf("%d",&x);
	
	int n=0;
	
	while(x>=60){
		x-=10;
		n++;
	}
	
	switch(n){
		case 1:
		printf("D\n");
		break;
		
		case 2:
		printf("C\n");
		break;
		
		case 3:
		printf("B\n");
		break;
		
		case 4:
		printf("A\n");
		break;
		
		case 5:
		printf("S\n");
		break;
		
		default:
		printf("不及格\n");
		break;
	}
	
	
	printf("再见");
	return 0;
}
