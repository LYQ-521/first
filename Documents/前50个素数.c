#include <stdio.h>

int main()
{
	int x;
	int m=0;
	for(x=2;m<=50;x++){
	int n=1;
	
	int y;
	for(y=2;y<x;y++){    //ÿһ�ִ��forѭ���������¶���һ��y,���¿�ʼһ��forѭ�������¸�ֵһ��yΪ2 
		if(x%y==0){
			n=0;
			break;    //�����break���Դ���Ҳ���Բ���������Ӱ�� 
		}
	}
	if(n==1){
		printf("%d\n",x);
		m++;
	}
}
	
	return 0;
}
