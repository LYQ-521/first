#include <stdio.h>

int main()
{
	int x,y;
	1<x<y<=500;
	//判断一个数是否为素数 
	scanf("%d %d",&x,&y);
	/*if(x=1)
	x=2
	*/  //因为1不是素数，所以总是要把1去掉的，要不在前面去掉，要不在后面去掉 
	int z;
	int i;//养成习惯：对于下面还需要用到的重要变量，用另一个变量将它保护起来 
	int sum=0; 
	int cnt=0;
	for(i=x;i<=y;i++){
    int t=1;   	
	for(z=2;z<i;z++){
		if(i%z==0){
			t=0;
			break;
		}
	}
	if(t==1){
	//	printf("%d",i);
		cnt++;
		sum+=i;
		if(i==1){
			cnt--;
			sum-=1;
		}
	}
	//printf("%d %d",cnt,sum);
}
    printf("%d %d",cnt,sum);
	return 0;
}
