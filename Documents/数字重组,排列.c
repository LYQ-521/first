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
	int i,j,k;
	i=a;
	int cnt=0;
	while(i<=a+3){
		j=a;
		while(j<=a+3){
			k=a;
			while(k<=a+3){
				if(i!=j){      //if嵌套是并且的意思
				               //if 和 if else语句是分段函数的意思,哪个条件满足,就执行哪个  
					if(i!=k){
						if(j!=k){
							cnt++;
							printf("%d%d%d",i,j,k);
							if(cnt==6){
								printf("\n");
								cnt=0;
							}else {
								printf(" ");
								}}}}k++;}j++;}i++; }
	
	return 0;
}
