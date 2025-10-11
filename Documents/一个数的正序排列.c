#include <stdio.h>
// 将一个数正序排列 
int main()
{
	int x;
	scanf("%d",&x);
	/*
	1:根据这个数的位数判断出其对应的10的多少次方 
	2：拆开 
	*/
	int t=x;//假如x=189 ,保护x 
	int cnt=0;
	while(t>0){
		t/=10;
		cnt++;
	}
	int first=1;
	int z=cnt;//保护cnt 
	while(z>1){
		first*=10;
		z--;
	}//cnt=3,x=189,189对应100，first=100 
	int d;
	do{
		d=x/first;
		printf("%d",d);/*1    8     9
		                 89    9     0
		                 100   1     0
		                  */
		x%=first;
		if(first>9) {  //100  10  1所以说最后一次循环的时候，first为1，为个位数，
		               //>9就相当于要求是两位数及其以上，前面的循环满足，
					   //所以前面的输出之后有空格，最后一位输出的后面没有空格 
		printf(" ");
		}
		first/=10;
	}while(first>0);
	
	return 0;
}
