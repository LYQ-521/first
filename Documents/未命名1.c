#include <stdio.h>

int main()
{
	printf("��ֱ�������ߵ�Ӣ�ߺͳߴ磬"
	        "������\"5 7\"��ʾ5Ӣ��7��:");
	
	int foot;
	int inch;
	
	scanf("%d %d, &foot, &inch");
	
	printf("�����%f�ס�\n",
	        ((foot + inch / 12) *0.3048));
	        
	return 0;
}
