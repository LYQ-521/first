#include <stdio.h>
//理解为两个人进行猜数游戏，一个人输入要猜的数和能猜多少次，另一个人来猜 

/*
1：如果猜的数大了，输出Too Big,如果输入的数小了，
就会输出Too small,猜对了就结束程序 
2：进行计数，如果一次就猜到了，就输出Bingo,三次以内猜对，就输出Lucky you
(因为代码是一行一行进行下去的，所以如果一次就猜对了，就会直接输出Bingo，
而不会输出Lucky you) ,超过三次且<=限制次数，则输出Good Guess,如果超过N（限制的次数）次
还没有猜对，就输出Game Over,并结束程序，在超过N次之前，
如果输入了（猜了）负数，就直接输出Game Over,并结束程序 
*/
int main()
{//两个人：A和B 
	int number,n;
	scanf("%d %d",&number,&n);//A输入的要B猜的数和限制猜的次数 
	int imp;
	int cnt=0;
	int x;
	//x=1;
	do{
		x=1;
		scanf("%d",&imp);//B每次猜的数 
		cnt++;
		if(imp<0){/*要对B输入（猜的）的数进行判断，有多种情况，分类讨论，
		所以用if    else if语句*/ 
			printf("Game Over\n");
			break;//或者令x=0 
		}else if(imp<number){
			printf("Too small\n");
		}else if(imp>number){
			printf("Too Big");
		}else{//代表imp=number,代表B猜对了 
			if(cnt==1){//如果一次就猜对了，就直接输出BIngo,而不会输出lucky you,
			//因为代码是一行一行进行下去的，
			//并且，执行了第一个if语句，就不会执行后面的else if语句了 
				printf("Bingo!\n");
			}
			if(n>3){//来到这里就代表cnt>1 
			if(cnt<=3){
				printf("Lucky you!\n");
			}else(cnt<=n); {
				printf("Good guess!\n"); 
			} 
			}else{//1<=n<=3
				if(cnt<=3){//cnt=2或3 
					printf("Lucky you!\n");
				}else{//代表这个cnt超过了N 
					x=0;
				}
			}
			x=0;//相等了，就要结束程序 
		}
	}while(x==1);//以x=0作为结束程序的标识 
	return 0;
}
