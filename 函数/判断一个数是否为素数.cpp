# include <stdio.h>

int main(void)
{
	int val;
	int i;

	printf("请输入一个数：");
	scanf("%d", &val);
	
	for (i=2; i<val; ++i)
	{
		if (val%i == 0)
			break;
	}

	if (i == val)
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}