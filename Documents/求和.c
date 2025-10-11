#include <stdio.h>

int main()
{
	int x;
	double z;
	double f=0.0;
	int n=3;
	for(x=1.0;x<=n;x++){
		z=1.0/x;
		//要注意：
		         //整数相除不保留小数部分，把除号两边的一个数改为浮点数，那么两一个数也会变为浮点数，这样，就变成了浮点数的运算了，结果就是浮点数了 
		f+=z;
	}
	
	printf("%f",f);//注意：输出浮点数用%f 
	
	return 0;
}
