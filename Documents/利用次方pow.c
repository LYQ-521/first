#include <stdio.h>      /*#include�����ڰ���ͷ�ļ���Ԥ����ָ� 
                         <stdio.h>���ͷ�ļ����������������ĺ���                                    */
 
#include <math.h>    //pow������ѧ��������Ҫ<math.h>���ͷ�ļ� 
int main()
{
	int x;
	scanf("%d",&x);
	int t;
	t=x;
//	int y=1;
	int cnt=0;
	do{
		t/=10;
		cnt++;
	}while(t>9);
	int y=pow(10,cnt);
	
	int d;
	do{
		d=x/y;
		printf("%d",d);
		if(y>9)
			printf(" ");
		x%=y;
		y/=10;
	}while(y>0);
	
	return 0;
}
