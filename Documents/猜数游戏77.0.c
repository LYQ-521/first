#include <stdio.h>
//���Ϊ�����˽��в�����Ϸ��һ��������Ҫ�µ������ܲ¶��ٴΣ���һ�������� 

/*
1������µ������ˣ����Too Big,����������С�ˣ�
�ͻ����Too small,�¶��˾ͽ������� 
2�����м��������һ�ξͲµ��ˣ������Bingo,�������ڲ¶ԣ������Lucky you
(��Ϊ������һ��һ�н�����ȥ�ģ��������һ�ξͲ¶��ˣ��ͻ�ֱ�����Bingo��
���������Lucky you) ,����������<=���ƴ����������Good Guess,�������N�����ƵĴ�������
��û�в¶ԣ������Game Over,�����������ڳ���N��֮ǰ��
��������ˣ����ˣ���������ֱ�����Game Over,���������� 
*/
int main()
{//�����ˣ�A��B 
	int number,n;
	scanf("%d %d",&number,&n);//A�����ҪB�µ��������ƲµĴ��� 
	int imp;
	int cnt=0;
	int x;
	//x=1;
	do{
		x=1;
		scanf("%d",&imp);//Bÿ�βµ��� 
		cnt++;
		if(imp<0){/*Ҫ��B���루�µģ����������жϣ��ж���������������ۣ�
		������if    else if���*/ 
			printf("Game Over\n");
			break;//������x=0 
		}else if(imp<number){
			printf("Too small\n");
		}else if(imp>number){
			printf("Too Big");
		}else{//����imp=number,����B�¶��� 
			if(cnt==1){//���һ�ξͲ¶��ˣ���ֱ�����BIngo,���������lucky you,
			//��Ϊ������һ��һ�н�����ȥ�ģ�
			//���ң�ִ���˵�һ��if��䣬�Ͳ���ִ�к����else if����� 
				printf("Bingo!\n");
			}
			if(n>3){//��������ʹ���cnt>1 
			if(cnt<=3){
				printf("Lucky you!\n");
			}else(cnt<=n); {
				printf("Good guess!\n"); 
			} 
			}else{//1<=n<=3
				if(cnt<=3){//cnt=2��3 
					printf("Lucky you!\n");
				}else{//�������cnt������N 
					x=0;
				}
			}
			x=0;//����ˣ���Ҫ�������� 
		}
	}while(x==1);//��x=0��Ϊ��������ı�ʶ 
	return 0;
}
