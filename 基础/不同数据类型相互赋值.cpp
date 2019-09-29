# include <stdio.h>

int main(void)
{
	int i = 45;
	long j = 102345;
	i = j;
	printf("%ld %d\n", i, j);

	return 0;
}