# include <stdio.h>

bool IsPrime(int val)         //bool类型只有true和flase两个类型；//函数功能分开写，最好不要加printf
{
	int i;

	for (i=2; i<val; ++i)
	{
		if (val%i == 0)
			break;
	}

	if (i == val)
		return true;
	else
		return false;
}

int main(void)
{
	int m;

	printf("请输入一个值：");
    scanf("%d", &m);

	if ( IsPrime(m) )
		printf("Yes\n");
	else
		printf("No!\n");

	return 0;
}