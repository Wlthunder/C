/*
	2019年8月18日11:32:25
	目的：
		测试%x %X %#x %#X %#o的用法
*/

# include <stdio.h>

int main(void)
{
	int i = 47;
	
	printf("i = %X\n", i); //2F
	printf("i = %x\n", i); //2f
	printf("i = %#x\n", i); //0x2f
	printf("i = %#X\n", i); //0X2F
	printf("i = %#o\n", i); //057

	return 0;
}
/*
	在VC++6.0中的输出结果是：
---------------------
i = 2F
i = 2f
i = 0x2f
i = 0X2F
i = 057
---------------------
	总结：
*/
