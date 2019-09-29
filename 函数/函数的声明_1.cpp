# include <stdio.h>

void f(void); //函数声明，分号不能丢掉

int main(void)
{
	f();      //前置声明，f()是个函数；

	return 0;
}

void f(void)
{
	printf("哈哈!\n");
}
