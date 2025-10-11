#include <stdio.h>
/*
        a:2
        2 3 4 5这四个数组成不重复的三位数 
        234 254......每行六个三位数,并且每个三位数之间以空格隔开
		 
        

*/
int main()
{
	int a;
	scanf("%d",&a);
	int x,y,z;
	
	do{
		x=a++;
		y=x++;
		z=y++;
	}while(z<1);
	
	
	
	return 0;
}
