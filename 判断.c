#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(b<0){
		b=-b;
	}
	if(a<0){
		printf("a小");
	}else if(a<b){
		printf("a<b");
	}else{
		printf("a>b");
	} /*经过代码的运行结果，判断了if    else if语句就是根据前后顺序，
	哪个满足并且在前面，就输出那个内部的语句，并不是把满足的全部输出*/ 
	
	
	return 0;
}
