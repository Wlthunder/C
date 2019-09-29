# include <stdio.h>

void exchange(int * p, int * q)
{
	int t;
	
	t = *p;      //p是int *， *p是int
	*p = *q;
	*q = t;                   

	return;
}

int main(void)
{
	int a = 3;
	int b = 5;
	exchange(&a, &b);        //exchange(a, b);错误
							 //要想改变主函数变量的值，必须接入主函数变量的地址；
							 //参考互换两个数字-1；主函数的a b和被调函数的a b不一样；所以换不了。
	                         //相当于在被调函数中改变主函数的变量的值。exchange(a, b)则不行。

	printf("a = %d, b = %d\n", a, b); 

	return 0;
}