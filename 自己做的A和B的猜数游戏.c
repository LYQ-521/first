#include <stdio.h>
//A��B���в�������Ϸ
//1��A����Ҫ�µ����������ֺͲµĴ���N(>3)
/*2:���м�����һ�β��о����Bingo,�������ڲ¶����Lucky You,
�������β��Ҳ�����N�Σ������Good Guess,����N�ξ����Game Over,����������
3���������ǲµ���Ϊ��������ֱ�����Game Over,����������*/ 
int main()
{
	int number,n;
	printf("��������ҪB�µ�����Ϊ��������������B�ܲµĴ�����n>3):");
	scanf("%d %d",&number,&n);//A����Ҫ�µ����ֺͲµĴ���N(>3) 
	int cnt=0;
	int z=1;
	
	if(number<0){
		number=-number;
	}//ʹ��Ҫ�µ�����Ϊ������ һ��������ɣ���if 
	while(n<=3){/*ȷ����n��һ������3 �������if�Ļ��� 
	ֻ�ܽ���һ��������ȷ��nһ������3��������whileѭ�� */
		printf("n��ֵҪ����3������������"); 
		scanf("%d",&n);
	}
	int inp;
    while(cnt<n){ //ȷ���������ƴ�����ʱ��ֱ�ӽ������� ,cnt��0��ʼ��ֻ����B��n�� 
    	scanf("%d",&inp);//B�µ��� 
    	cnt++;//���� 
    	if(inp<0){
    		printf("Game Over!\n"); 
    		break;
		}else if(inp<number){
			printf("Too small!\n");
		}else if(inp>number){
			printf("Too Big!\n");
		}else {//�¶��� 
			if(cnt==1){
				printf("Bingo!\n");
			}else if(cnt<=3){//cnt=2��3 
				printf("Lucky You!\n");
			}else /*��cnt<n)*/{/*����������ж��Ѿ�˵��cnt>3,��while���ж�����ʹ��cnt<n,
			        ����˵����ʡȥ����ģ�cnt<n)*/
				printf("Good Guess!\n");
				
			}/*else{
			printf("Game Over!\n");
			}*/
			//��������������N���������ѭ���ǲ�������cnt>n�ģ����Կ���ʡȥ 
		break;//�¶��˾�ֱ�ӽ������� 
		}
	}
	return 0;
}
