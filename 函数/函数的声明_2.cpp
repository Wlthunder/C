/*
	2019年8月22日16:17:54
	一定要明白该程序为什么是错误的
	一定要明白该程序第9行生效之后程序为什么就正确了
*/

# include <stdio.h>

void f(void);  //9行

void g(void)
{
	f();  //因为定义f放在了调用f的后面，所有语法出错
}

void f(void)
{
	printf("哈哈!\n");
}

int main(void)
{
	g();

	return 0;
}


