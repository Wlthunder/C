/*
	2019年8月22日10:46:06
	求a b的最大值；c d的最大值；e f的最大值。
*/
# include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f;
	a = 1, b = 2, c = 3, d = 9, e = -5, f = 100; //逗号表达式
	
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);

	if (c > d)                   //重复的代码
		printf("%d\n", c);
	else
		printf("%d\n", d);

	if (e > f)                   //重复的代码
		printf("%d\n", e);
	else
		printf("%d\n", f);

	return 0;
}
/*
总结：
-----------------------------------------------
函数可以避免重复性操作，参见函数的第一个例子-2
-----------------------------------------------
*/