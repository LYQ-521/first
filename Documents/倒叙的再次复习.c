#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y;
	
	while(x>0){
		y=x%10;
		printf("%d\n",y);    //ÿһ��ѭ�������y��ֵ���ᱻ����˳�򱣴����������������н����ʱ���һ����ʾ���� ֤����printf("%d\n",y) 
		x/=10;
	}
	//printf("%d",y);    //�����whileѭ���У�ÿһ��ѭ����y��ֵ���ᱻ���¸�һ��ֵ  
	
	return 0;
}
