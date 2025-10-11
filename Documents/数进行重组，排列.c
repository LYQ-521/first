#include <stdio.h>
/*
        a:2
        2 3 4 5这四个数组成不重复的三位数 
        234 254......每行六个三位数,并且每个三位数之间以空格隔开
		 
        

*/
int main()
{
	int a;
	int cnt=0;
	a=2;
	int i,j,k;
	i=a;//令i,j,k都从2开始，不断地加1，加到最大值5
	while(i<=a+3){   //a+3就是最大值 
		j=a;//令i,j,k都从2开始，不断地加1，加到最大值5
		while(j<=a+3){
			k=a;
			while(k<=a+3){/*首先开始增加的是k,再是j，最后是i,也就是说，
			开始时最小的是i,最大的是k*/ 
				if(i!=j){   //首先要保证i的值不变，从K到J不断地加，先是K加，再是J加，最后是i加 
					if(j!=k){
						if(i!=k){
							cnt++;
							printf("%d%d%d",i,j,k);//若第一个数是按照从小到大排的，那便对了  
							//首先要保证i的值不变，从K到J不断地加，先是K加，再是J加，最后是i加 
								if(cnt==6){
								printf("\n");
								cnt=0;
							}else{
								printf(" ");
							}
						}
					}
				}
				k++;
			}
			j++;
		}
	i++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
