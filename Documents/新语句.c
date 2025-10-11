 #include <stdio.h> 
 
 int main()
 {
 	int x;
 	
 	printf("请输入一个数");
 	scanf("%d",&x);
 	
 	switch(x){
 		case 1:
 			printf("一只");
 			break;
 		case 2:
		 	printf("两只");
		 	break;
		case 3:
		    printf("三只"); 
			break;
		default:
		printf("结束");	
		break;	
	 }
 	
 	return 0;
 }
