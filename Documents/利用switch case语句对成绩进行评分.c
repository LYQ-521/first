#include <stdio.h>

int main ()
{
	int x;
	printf("请输入您的成绩");
	scanf("%d",&x);
	
	int y;
	y=x/10;
	
	switch (y){
		
		case 10:
		case 9:
			printf("A\n");
			break;
		
		case 8:
		printf("B\n");
		break;
		
		case 7:
		printf("C\n");
		break;
		
		case 6:
		printf("D\n");
		break;
		
		default:
		printf("不及格\n");
	}
	printf("再见");
	
	return 0;
}
