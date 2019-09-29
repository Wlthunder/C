/*
	2019年8月19日09:56:16
*/
# include <stdio.h>

int main(void)
{
	/*
	if (3 > 2)
	{
		printf("AAAA\n");
		printf("BBBB\n");
	}
                         //输出结果为：AAAA BBBB
	*/
	if (1 > 2)
	{
		printf("AAAA\n");
		printf("BBBB\n");
	}
						
	printf("CCCC\n");   //输出结果为CCCC;注意此语句不缩进
	
	return 0;
}
/*
-------------------------------
如果想控制多个语句的执行或不执行
必须把这些语句用{}括起来。
-------------------------------
*/