# include <stdio.h>

void f(int i, float x)
{
	printf("%d\n", i);
	printf("%f\n", x);
}

int main(void)
{
	f(9.9, 6.6);     //最好不要写9.9

	return 0;
}
/*
	在VC++6.0中的输出结果是：
--------------------------
9
6.600000
--------------------------
*/
