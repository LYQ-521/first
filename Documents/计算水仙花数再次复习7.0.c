#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int x,t,d,z;
	int first=1;
	t=n;
	while(t>1){
		first*=10; 
		t--;
	}
	int y;
	for(x=first;x<first*10;x++){//上一个循环结束后X=0，所以下一个循环的X=1 
		y=x;
		int sum=0;
		do{
			z=n;
			d=y%10;
			int p=1;
			while(z>0){
				p*=d;
				z--;
			}
			sum+=p;
			y/=10;
		}while(y>0);//x=0
		if(x==sum){
			printf("%d\n",x);
		}
	}
	return 0;
}
