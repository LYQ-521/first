#include <stdio.h>
//����ǰ50������ 
int main()
{
    int x;
    int cnt=0;
	int d;
	int z; 
    for(x=2;cnt<=50;x++){
    	z=1;//Ҫȷ�����ж�һ�����Ƿ�Ϊ����֮ǰ����z��ֵΪ1���Ա�����ܹ���ȷ���ж��Լ���ȷ����� 
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
