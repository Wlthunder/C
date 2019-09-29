# include <stdio.h>

void f(void)                 //括号中的void表示该函数不能接受数据；函数名前的void表示函数没有返回值（不能写return 0;）。
{
	int i;

	for (i=0; i<5; ++i)
	{
		printf("AAAA\n");
//		break;                //结果为AAAA BBBB
		return;               //结果为AAAA
							  //return终止被调函数，向主调函数返回表达式的值。
	}
	printf("BBBB\n");
}

int main(void)
{
	f();

	return 0;
}