# include <stdio.h>

int f()
{
	return 10.5;      //因为函数的函数返回值类型是int，不是以return为准。最终函数返回值类型为10.000000
}

int main(void)
{
	int i = 99;
	double x = 6.6;

	x = f();
	printf("%lf\n", x);

	return 0;
}