# include <stdio.h>

int f(int i)
{
	i = 99; 
	return i;
}

int main(void)
{	
	int i = 6;
/*	
	i = f(i);
	printf("i = %d\n", i);   //输出的结果为i = 99
*/
/*
	f(i);
	printf("i = %d\n", i);   //输出的结果为i = 6
*/
	f(i);
	printf("i = %d\n", f(i));//输出的结果为i = 99

	return 0;
}