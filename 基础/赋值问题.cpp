# include <stdio.h>

int main (void)
{
	int i = 2147483647;//结果：i = 2147483647
	//int i = 2147483648;//结果：i = -2147483648
	//int i = 2147483649;// 结果：i = -2147483647


	printf("i = %d\n", i);

	return 0;
}