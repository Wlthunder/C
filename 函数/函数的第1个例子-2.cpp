/*
	2019年8月22日10:46:06
	求a b的最大值；c d的最大值；e f的最大值。
*/
# include <stdio.h>

void max(int i, int j)         //void表示函数没有返回值；max是函数的名字；i和j叫形式参数；int i、int j两个整形的的形参
{
	if (i > j)
		printf("%d\n", i);
	else
		printf("%d\n", j);     //max(a, b);执行完毕去执行max (c, d);使用完毕后，被i j分配的空间会被释放掉；
}                              //函数工具，if...slse...语句只写了一次；

int main(void)                 //main也是个函数；程序先执行的是main函数
{
	int a, b, c, d, e, f;
	a = 1, b = 2, c = 3, d = 9, e = -5, f = 100; //逗号表达式

	max (a, b);                //把a b的值发送给ij；然后程序跳到max函数内部去执行。
	max (c, d);
	max (e, f);                //三次分配的空间并不一定是同一块空间，没有一种语言可以保证。

	return 0;                  //函数从main数进，从main函数退出；
}