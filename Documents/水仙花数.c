#include <stdio.h>
//��������λ���е�����ˮ�ɻ��� 153=1^3+5^3+3^3,��λ����N=3 
/*
1:������n=3,��100�ߵ�999 
2:�𿪣���ͣ��ж� 

*/
int main()
{
	int x;
	int n;
	scanf("%d",n);
    int t;
    t=n;
    int first=1;
    
	while(t>1){
		first*=10;
		t--;
	}
	int y;
	for(x=first;x<first*10;x++){
		y=x;
		int d=0;
		int sum=0;
		int z;
		
		do{
			d=x%10;
			z=n;
			int p=1;
			while(z>0){
				p*=d;
				z--;
			}
			sum+=p;
			x/=10;
		}while(x>0);//x=0
		if(y==sum){
			printf("%d",y);
		}
		
	}
	
	return 0;
}
