#include <stdio.h>

int main()
{
	int x=13542;
	int d;
	int t=0;
	do{
		d=x%10;
		printf("%d",d);
		t=t*10+d;    //这里的t需要进行初始化 
		x/=10;
		
	}while(x>0);     //这里循环结束之后，X的值为0了 
	x=t;             //利用 t=t*10+d这个赋值表达式，进而对X进行赋值 
	printf("\n");
	int y;
	do{
		y=x%10;
		printf("%d",y);
		if(x>9){
			printf(" ");   //解决末尾2后面有空格的问题 
		}
		x/=10;
	}while(x>0);
	printf("\n");
	
	return 0;
}
