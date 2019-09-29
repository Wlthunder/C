# include <stdio.h>

void exchange(int * p, int * q)
{
	int * t;
	
	t = p;
	p = q;
	q = t;                   //交换的是p q的内容；*p = b；*q = a；

	return;
}

int main(void)
{
	int a = 3;
	int b = 5;
	exchange(&a, &b);        //exchange(a, b);错误

	printf("a = %d, b = %d\n", a, b); //结果还是a = 3,b = 5

	return 0;
}