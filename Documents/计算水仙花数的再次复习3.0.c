#include <stdio.h>
//计算水仙花数     三位数153（N=3）153=1^3+5^3+3^3 
int main()
{
	int n;
	//scanf("%d",&n);
	n=3;
	int x;
	int a;
	a=n;
	int first=1;
	while(a>1){
		first*=10;
		a--;
	}//first=100,n=3,first*10=1000,100~999,走遍所有的三位数（遍历） 
	x=first;
	while(x<first*10){//x:100~999
	        int t;
	        t=x;
	        int d;
	        int sum=0;
	     do{
		 	
			 d=t%10;//x=153,d=3
			 t/=10;//x=15
			 int p=1;
		 	int m;
		 	//int sum=0;//会导致上一轮的sum的值没有了 
		 	m=n;
		 	while(m>0){
		 		p*=d;
		 		m--;
			 }//p=3^3,m=0
			 sum+=p;
		 }while(t>0);//若用x，则x=0,后面还要用x++,来走遍所有的三位数，所以要保护x 
		if(x==sum){
			printf("%d\n",x);//若是结束了，则这个\n会占用一行，在占用的这一行下面继续输出 
		}
		x++;
	}
	
	return 0;
}
