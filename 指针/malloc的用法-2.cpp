# include <stdio.h>
# include <malloc.h>

void f(int * q)
{
//	*p = 200;           //f函数没有定义p变量
//	**q = 200；         //error
	*q = 200;

	free(q);			//error 把q指向的内存释放掉，4个字节被释放了
}

int main(void)
{
	int * p = (int *)malloc(sizeof(int)); //sizeof(int)返回值是int所占的字节数
	*p = 10;
	printf("%d\n", *p);

	f(p);                //p是int *类型
	printf("%d\n", *p);

	return 0;
}