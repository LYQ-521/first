#include <stdio.h>

int main()
{
	int price=0;
	int amount=0;
	
	printf("��������(Ԫ)");
	scanf("%d",&price);
	
	printf("���������(Ԫ)");
	scanf("%d",&amount);
	
	int change=amount-price;
	
	printf("����%dԪ\n",change);
	
	return 0;
}
