#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	//n=3;
	int first=1;//根据N算出对应的first(n对应的位数的最小数） 
	 int i=1;
	 while(i<n){
	 	first*=10;
	 	i++;
	 }//first=100
	i=first;
	while(i<first*10){
	
		int t;
		int d=0;
		int sum=0;
		//int p=1;
		int j=0;
		t=i;//(每个循环都要这样，所以放在拆开之前）因为要拆开i，所以为了保护i（后面还要让i++,继续循环下去），用t来代替 
		do{
		    int p=1;//注意： 判断跳出循环后，p的值是否会再次被初始化为1,而是上一轮循环后的结果 
			int j=0;
			d=t%10;
			t/=10;//判断跳出循环后，j的值是否会再次被初始化为0 结论：不会被初始化，结果为do  while上一轮循环完后的结果 
			while(j<n){
				p*=d;
				j++;
			}//跳出循环后，变量的结果是循环后的结果，而不是初始化时的结果 
			sum+=p;
		}while(t>0);
	if(sum==i){      //sum=3^3+5^3+1^3//i在这里还需要进行重要的判断，所以在前面用t来保护i 
		printf("%d\n",i);
	}
	i++;
}
	return 0;
}
