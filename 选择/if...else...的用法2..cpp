# include <stdio.h>

int main(void)
{
	/*
	if (3 > 2)
		printf("AAAA\n");
	else                 //else默认只能控制1个
		printf("BBBB\n");

	printf("CCCC\n");    //输出结果为AAAA CCCC  注意缩进
	*/
	if (1 > 2)
		printf("AAAA\n");
	else                 
		printf("BBBB\n");

	printf("CCCC\n");    //输出结果为BBBB CCCC

	return 0;
}
/*
---------------------------------------
整个程序总共2个语句：A B语句只能执行1个
else只能控制一个语句执行
---------------------------------------
*/