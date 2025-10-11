#include <stdio.h>

int main()
{
	int x;
	x=2;
	//scanf("%d",&x);
	int m,n,q;
	int exit=0;
	
	for(m=1;m<20;m++){
		for(n=1;n<10;n++){
			for(q=1;q<4;q++){
				if(m*1+n*2+q*5==20){
					printf("两块钱需要%d个1角，%d个2角，%d个5角\n",m,n,q);
					exit =1;
					break;   //break只能使其离开它所在的那个for循环，不能一次便离开所有的for循环 
				}
			}
		if(exit) break;
		}
		if(exit) break;    //接力break 
	}
	
	return 0;
}
