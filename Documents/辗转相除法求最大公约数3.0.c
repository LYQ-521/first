#include <stdio.h>
/*
         x    y      t

*/
int main()
{
	int t;
	int a,b;
	scanf("%d %d",&a,&b);
	int m,n;
	m=b;
	n=a;
	while(b!=0){
	t=a%b;
	a=b;
	b=t;
	}//a=6,b=0
	int z;
	z=a;
	printf("%d��%d�����Լ��Ϊ%d",m,n,z);
	
	return 0;
}
