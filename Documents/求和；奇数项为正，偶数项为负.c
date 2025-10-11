#include <stdio.h>

int main()
{      //ÇóºÍ£ºf(n)=1/1-1/2+1/3-1/4+~~+1/n;
	int x;
	int n=2;
	double z;
	double f=0.0;
	int m;
	for(x=1;x<=n;x++){
		m=1;
		if(x%2==0){
			m=0;
		}
		if(m==0){
		z=1.0/-x;
		}
		if(m==1){	
		z=1.0/x;
		}
		f+=z;
		
	}
	printf("f(n)=%f",f);
	
	return 0;
}
