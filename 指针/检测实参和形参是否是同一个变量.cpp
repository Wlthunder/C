# include <stdio.h>

int f(int i)
{
	i = 99;                //局部变量i
	return i;
}

int main(void)
{
	int i = 6;             //局部变量i
	printf("i = %d\n", i);
	f(i);
	printf("i = %d\n", i);

	return 0;
}