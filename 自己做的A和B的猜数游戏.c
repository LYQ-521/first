#include <stdio.h>
//A和B进行猜数字游戏
//1：A输入要猜的正整数数字和猜的次数N(>3)
/*2:进行计数，一次猜中就输出Bingo,三次以内猜对输出Lucky You,
超过三次并且不超过N次，就输出Good Guess,超过N次就输出Game Over,并结束程序
3：另外若是猜的数为负数，就直接输出Game Over,并结束程序*/ 
int main()
{
	int number,n;
	printf("请输入你要B猜的数（为正整数）和限制B能猜的次数（n>3):");
	scanf("%d %d",&number,&n);//A输入要猜的数字和猜的次数N(>3) 
	int cnt=0;
	int z=1;
	
	if(number<0){
		number=-number;
	}//使得要猜的数字为正整数 一步即可完成，用if 
	while(n<=3){/*确保了n的一定大于3 。如果用if的话， 
	只能进行一步，不能确保n一定大于3，所以用while循环 */
		printf("n的值要大于3，请重新输入"); 
		scanf("%d",&n);
	}
	int inp;
    while(cnt<n){ //确保超过限制次数的时候直接结束程序 ,cnt从0开始，只会让B猜n次 
    	scanf("%d",&inp);//B猜的数 
    	cnt++;//计数 
    	if(inp<0){
    		printf("Game Over!\n"); 
    		break;
		}else if(inp<number){
			printf("Too small!\n");
		}else if(inp>number){
			printf("Too Big!\n");
		}else {//猜对了 
			if(cnt==1){
				printf("Bingo!\n");
			}else if(cnt<=3){//cnt=2或3 
				printf("Lucky You!\n");
			}else /*（cnt<n)*/{/*上面的两个判断已经说明cnt>3,而while的判断条件使得cnt<n,
			        所以说可以省去上面的（cnt<n)*/
				printf("Good Guess!\n");
				
			}/*else{
			printf("Game Over!\n");
			}*/
			//代表超过了最大次数N，但是这个循环是不可能让cnt>n的，所以可以省去 
		break;//猜对了就直接结束程序 
		}
	}
	return 0;
}
