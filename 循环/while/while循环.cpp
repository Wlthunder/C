/*
	2019年8月21日10:00:18
	求1+2+3+...+100 = ？
*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	/*
	for (i=1; i<101; ++i)
	{
		sum = sum + i;
	}
	
	printf("sum = %d\n", sum);
	*/

	i = 1;

	while (i<101)
	{
		sum = sum +i;
		++i;
	}

	printf("sum = %d\n", sum);
	return 0;
}