#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y;
	
	while(x>0){
		y=x%10;
		printf("%d\n",y);    //每一次循环输出的y的值都会被按照顺序保存起来，在最后出运行结果的时候会一起显示出来 证明：printf("%d\n",y) 
		x/=10;
	}
	//printf("%d",y);    //在这个while循环中，每一次循环，y的值都会被重新赋一次值  
	
	return 0;
}
