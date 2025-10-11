#include <stdio.h>

int main()
{
	int t1;
	int t2;
	int t;
	
	int hour1,minture1;
	int hour2,minture2;
	
	printf("请输入两个时间段");
	scanf("%d %d",&hour1,&minture1);
	scanf("%d %d",&hour2,&minture2);
	
	t1=hour1*60+minture1;
	t2=hour2*60+minture2;
	
	t=t1-t2;
	
	printf("这两个时间段的时间差为%d小时%d分钟",t/60,t%60);
	
	return 0;
}
