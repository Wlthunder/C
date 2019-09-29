/*
	2019年8月22日16:42:08
	求1到某个数字之间(包括该数字)所有的素数，并将其输出
	只用main函数实现，有局限性：
		1. 代码的重用性不高
		2. 代码不容易理解		
*/

# include <stdio.h>

int main(void)
{
	int val;
	int i;
	int j;

	scanf("%d", &val);
	for (i=2; i<=val; ++i)    //最外层for表示从2-val开始试数，试数的过程就是内部的for：判断i是否是素数，是则输出;不是不输出
		                      //i的范围是2 3 4 ...val
	{	
		for (j=2; j<i; ++j)
		{
			if (0 == i%j)
				break;
		}
		if (j == i)
			printf("%d\n", i);
	}

	return 0;
}