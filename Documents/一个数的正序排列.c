#include <stdio.h>
// ��һ������������ 
int main()
{
	int x;
	scanf("%d",&x);
	/*
	1:�����������λ���жϳ����Ӧ��10�Ķ��ٴη� 
	2���� 
	*/
	int t=x;//����x=189 ,����x 
	int cnt=0;
	while(t>0){
		t/=10;
		cnt++;
	}
	int first=1;
	int z=cnt;//����cnt 
	while(z>1){
		first*=10;
		z--;
	}//cnt=3,x=189,189��Ӧ100��first=100 
	int d;
	do{
		d=x/first;
		printf("%d",d);/*1    8     9
		                 89    9     0
		                 100   1     0
		                  */
		x%=first;
		if(first>9) {  //100  10  1����˵���һ��ѭ����ʱ��firstΪ1��Ϊ��λ����
		               //>9���൱��Ҫ������λ���������ϣ�ǰ���ѭ�����㣬
					   //����ǰ������֮���пո����һλ����ĺ���û�пո� 
		printf(" ");
		}
		first/=10;
	}while(first>0);
	
	return 0;
}
