#include <stdio.h>
/*
        a:2
        2 3 4 5���ĸ�����ɲ��ظ�����λ�� 
        234 254......ÿ��������λ��,����ÿ����λ��֮���Կո����
		 
        

*/
int main()
{
	int a;
	scanf("%d",&a);
	int i,j,k;
	i=a;
	int cnt=0;
	while(i<=a+3){
		j=a;
		while(j<=a+3){
			k=a;
			while(k<=a+3){
				if(i!=j){      //ifǶ���ǲ��ҵ���˼
				               //if �� if else����Ƿֶκ�������˼,�ĸ���������,��ִ���ĸ�  
					if(i!=k){
						if(j!=k){
							cnt++;
							printf("%d%d%d",i,j,k);
							if(cnt==6){
								printf("\n");
								cnt=0;
							}else {
								printf(" ");
								}}}}k++;}j++;}i++; }
	
	return 0;
}
