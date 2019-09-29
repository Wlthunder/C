# include <stdio.h>

void g(int * pArr, int len)
{
	pArr[2] = 88;                   //pArr[2] == a[2] 
}

void f(void)                        //f 函数终止后，数组所占的空间就被释放
{
	int a[5] = {1, 2, 3, 4, 5};     //20个字节的存储空间程序员无法手动编程释放它，
									//只能在本函数运行完毕时由系统自动释放
	g(a, 5);
	printf("%d\n", a[2]);
}

int main(void)
{
	f();

	return 0
}