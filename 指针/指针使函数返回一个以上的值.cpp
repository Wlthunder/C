# include <stdio.h>

int f(int i, int j)             //没有指针，不能通过形参改变实参的值
{
	return 100;
//  return 88；                 //没有指针，只能修改一个值
}

int main(void)
{
	int a = 3, b = 5;

	a = f(a, b);
	b = f(a, b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}