/*
	2019Äê8ÔÂ20ÈÕ10:22:09
	1+2+3+4+...100
*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int k;

	scanf("%d", &k);

	for (i=1; i<=k; ++i)
		sum = sum + i;

	printf("sum = %d\n", sum);

	return 0;
}