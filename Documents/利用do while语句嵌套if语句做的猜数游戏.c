#include <stdio.h>

int main()
{
	int x;
	printf("已经准备好了一个数，请输入一个数，来猜猜：");
	scanf("%d",&x);
	
	int y=16;
	
	do{
	if(x>y){
		printf("大了，再输入一次：");
		scanf("%d",&x);
	}
	if(x<y){
	printf("小了，再输入一次：");
		scanf("%d",&x);
		
	}
      }while (x!=y);     //可以利用if语句进行判断，并利用do  while 语句将if判断语句嵌套在循环里
	 // ，在if判断语句结束后设置while加循环条件，判断是否再次进行判断循环 
	printf("猜对了");
	
	return 0;
}
