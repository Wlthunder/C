# include <stdio.h>

void g(int * p, int *q)     //p和a不是一个变量；只不过p保存了a变量的地址：p = &a；*p = a；
							//可以改变主函数实参的值
{
	*p = 1;
	*q = 2;                //可以改变主函数一个以上的值
}

int main(void)
{
	int a = 3, b = 5;
	
	g(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}