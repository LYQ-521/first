 #include <stdio.h> 
 
 int main()
 {
 	int x;
 	
 	printf("������һ����");
 	scanf("%d",&x);
 	
 	switch(x){
 		case 1:
 			printf("һֻ");
 			break;
 		case 2:
		 	printf("��ֻ");
		 	break;
		case 3:
		    printf("��ֻ"); 
			break;
		default:
		printf("����");	
		break;	
	 }
 	
 	return 0;
 }
