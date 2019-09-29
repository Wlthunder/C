# include <stdio.h>

void exchange(int a, int b)    //a, b和主函数的a, b没有冲突
{
	int t;

	t = a;
	a = b;
	b = t;                    //只会操纵形参a，b

	return;
}

int main(void)
{
	int a = 3;
	int b = 5;
	exchange(a, b);           //执行完后，形参a，b存储空间释放；主函数实参a, b仍然存在。

	printf("a = %d, b = %d\n", a, b);  //输出的还是主函数的a, b

	return 0;
}