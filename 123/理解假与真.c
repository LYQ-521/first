#include <stdio.h>

int main()
{
	int x=1;
	int y=0;
	
	if(x)//x=1,为真 
	printf("我是真的\n");
	if(y)//y=0,为假 
		printf("我是假的\n"); 
		/*
		在if语句判断之前，将X赋值为1，将Y赋值为0，那么到了判断的时候，
		判断X为真，所以就输出第九行的东西，判断了Y为假，就不输出第十行的内容 
		*/
		x=0;
		if(!x){//!x的值由前面的x的值决定，前面x的值为0，则!x的值就为1，为真，输出内容 
			printf("我是真的\n"); 
		}
		int a;
		do{
			scanf("%d",&a);
			if(a%2==0){
				printf("是偶数\n"); 
			}else{
				printf("是奇数\n"); 
			}
			y=1;
		}while(!y);//因为y的值为1，所以!y为0，为假，循环结束 
	return 0;
}//根据运行结果可知，我的理解是完全正确的 
