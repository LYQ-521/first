#include <stdio.h>
//计算前50个素数 
int main()
{
    int x;
    int cnt=0;
	int d;
	int z; 
    for(x=2;cnt<=50;x++){
    	z=1;//要确保在判断一个数是否为素数之前，把z赋值为1，以便后面能够正确的判断以及正确的输出 
    	for(d=2;d<x;d++){
    		if(x%d==0){
    			z=0;
    			break;
			}
		}
		if(z==1){
			printf("%d\n",x);
			cnt++;
		}
	}
    
    
	return 0;
}
