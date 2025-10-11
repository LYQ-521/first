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
					goto out;
				}
			}
		}
	}
	out:
	    return 0;
}
