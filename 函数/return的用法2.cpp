# include <stdio.h>

int max(int i, int j)        //函数一个功能：找到最大值      
{
	if (i > j)
		return i;
	else
		return j;     
}                             

int main(void)                 
{
	int a, b, c, d, e, f;
	a = 1, b = 2, c = 3, d = 9, e = -5, f = 100; //逗号表达式

	printf("%d\n", max(a, b));
	printf("%d\n", max(c, d));
	printf("%d\n", max(e, f));

	return 0;                  
}