#include <stdio.h>

int main()
{
	int hour1,minture1;
	int hour2,minture2;
	
	printf("请输入两个时间段");
	scanf("%d %d",&hour1,&minture1);
	scanf("%d %d",&hour2,&minture2);
	
	int t1=hour1*60+minture1;
	int t2=hour2*60+minture2;
	
	int t=t2-t1;
	
	printf("这两个时间段的时间差为%d小时%d分钟",t/60,t%60);
	
	return 0;
	
}
