#include <stdio.h>      /*#include是用于包含头文件的预处理指令， 
                         <stdio.h>这个头文件包含了输入和输出的函数                                    */
 
#include <math.h>    //pow属于数学函数，需要<math.h>这个头文件 
int main()
{
	int x;
	scanf("%d",&x);
	int t;
	t=x;
//	int y=1;
	int cnt=0;
	do{
		t/=10;
		cnt++;
	}while(t>9);
	int y=pow(10,cnt);
	
	int d;
	do{
		d=x/y;
		printf("%d",d);
		if(y>9)
			printf(" ");
		x%=y;
		y/=10;
	}while(y>0);
	
	return 0;
}
