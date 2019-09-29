# include <stdio.h>

bool IsPrime(int m)      //本函数的功能是: 判断m是否是素数，是返回true，不是返回false
{
	int i;
		
	for (i=2; i<m; ++i)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;

}

void TraverseVal(int n)   //本函数的功能是把1到n之间所有的素数在显示器上输出
						  //是素数就输出；不是素数就不输出。

{
	int i;

	for (i=2; i<=n; ++i)
	{
		if ( IsPrime(i) )
		printf("%d\n", i);
	}
}

int main(void)
{
	int val;
 
	scanf("%d", &val);
	TraverseVal(val);

	return 0;
}