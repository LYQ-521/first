#include <stdio.h>
//����ˮ�ɻ���     ��λ��153��N=3��153=1^3+5^3+3^3 
int main()
{
	int n;
	//scanf("%d",&n);
	n=3;
	int x;
	int a;
	a=n;
	int first=1;
	while(a>1){
		first*=10;
		a--;
	}//first=100,n=3,first*10=1000,100~999,�߱����е���λ���������� 
	x=first;
	while(x<first*10){//x:100~999
	        int t;
	        t=x;
	        int d;
	        int sum=0;
	     do{
		 	
			 d=t%10;//x=153,d=3
			 t/=10;//x=15
			 int p=1;
		 	int m;
		 	//int sum=0;//�ᵼ����һ�ֵ�sum��ֵû���� 
		 	m=n;
		 	while(m>0){
		 		p*=d;
		 		m--;
			 }//p=3^3,m=0
			 sum+=p;
		 }while(t>0);//����x����x=0,���滹Ҫ��x++,���߱����е���λ��������Ҫ����x 
		if(x==sum){
			printf("%d\n",x);//���ǽ����ˣ������\n��ռ��һ�У���ռ�õ���һ������������ 
		}
		x++;
	}
	
	return 0;
}
