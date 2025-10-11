#include <stdio.h>
//计算所给位数中的所有水仙花数 153=1^3+5^3+3^3,三位数，N=3 
/*
1:遍历，n=3,从100走到999 
2:拆开，求和，判断 

*/
int main()
{
	int x;
	int n;
	scanf("%d",n);
    int t;
    t=n;
    int first=1;
    
	while(t>1){
		first*=10;
		t--;
	}
	int y;
	for(x=first;x<first*10;x++){
		y=x;
		int d=0;
		int sum=0;
		int z;
		
		do{
			d=x%10;
			z=n;
			int p=1;
			while(z>0){
				p*=d;
				z--;
			}
			sum+=p;
			x/=10;
		}while(x>0);//x=0
		if(y==sum){
			printf("%d",y);
		}
		
	}
	
	return 0;
}
