#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int y;
	
	int z=1;
	
	for (y=2;y<x;y++){
		if(x%y==0){   //ע�⣺�Ⱥ�Ϊ:"=="
			z=0;
		}
	}
	if(z==0){       //ע�⣺�Ⱥ�Ϊ:"=="
		printf("��������");
	}else{
		printf ("������"); 
	}
	
	return 0;
}


// Ŀǰ��������ѧ��������䶼����Ƕ�� 
