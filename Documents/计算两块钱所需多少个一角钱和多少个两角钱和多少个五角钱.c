#include <stdio.h>

int main()
{
	int x;
	x=2;
	//scanf("%d",&x);
	int m,n,q;
	int exit=0;
	
	for(m=1;m<20;m++){
		for(n=1;n<10;n++){
			for(q=1;q<4;q++){
				if(m*1+n*2+q*5==20){
					printf("����Ǯ��Ҫ%d��1�ǣ�%d��2�ǣ�%d��5��\n",m,n,q);
					exit =1;
					break;   //breakֻ��ʹ���뿪�����ڵ��Ǹ�forѭ��������һ�α��뿪���е�forѭ�� 
				}
			}
		if(exit) break;
		}
		if(exit) break;    //����break 
	}
	
	return 0;
}
