/*
	2019年8月20日11:08:55
	很重要的一个程序。
*/
# include <stdio.h>

int main(void)
{
	int i;
	int count= 0;
	int sum = 0;

	for (i=1; i<10; i+=2)
	{
		count = count + 1;                //计算for内循环执行几次
		sum = sum + i;                    //计算奇数之和
		printf("循环第%d次！\n", count);  //执行了5次；
	}
	
	printf("最终输出i = %d\n", i);        // i = 11;
	printf("最终输出count = %d\n", count);// count = 5;
	printf("最终输出sum = %d\n", sum);	  // sum = 25


	return 0;
}
