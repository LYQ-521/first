#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(b<0){
		b=-b;
	}
	if(a<0){
		printf("aС");
	}else if(a<b){
		printf("a<b");
	}else{
		printf("a>b");
	} /*������������н�����ж���if    else if�����Ǹ���ǰ��˳��
	�ĸ����㲢����ǰ�棬������Ǹ��ڲ�����䣬�����ǰ������ȫ�����*/ 
	
	
	return 0;
}
