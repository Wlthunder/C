# include <stdio.h>

int f(void)
{
	printf("AAAA\n");
	return 10;
}

int main(void)
{
	int i;
	i = f();
	printf("%d\n", i);

	return 0;
}
/*
	在VC++6.0中的输出结果是：
-------------------------------
AAAA
10
-------------------------------
*/