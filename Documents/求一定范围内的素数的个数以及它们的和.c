#include <stdio.h>

int main()
{
	int x,y;
	1<x<y<=500;
	//�ж�һ�����Ƿ�Ϊ���� 
	scanf("%d %d",&x,&y);
	/*if(x=1)
	x=2
	*/  //��Ϊ1������������������Ҫ��1ȥ���ģ�Ҫ����ǰ��ȥ����Ҫ���ں���ȥ�� 
	int z;
	int i;//����ϰ�ߣ��������滹��Ҫ�õ�����Ҫ����������һ������������������ 
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
