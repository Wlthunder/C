/*
	2019年8月18日14:40:24
*/
# include <stdio.h>

int main(void)
{
	printf("%d %d %d %d %d\n", 3%3, 13%-3, -13%3, -13%-3, -13%23);

	return 0;
}
/*
	在VC++6.0中的输出结果是：
		0 1 -1 -1 -13
*/