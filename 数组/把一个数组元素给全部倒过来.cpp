# include <stdio.h>

int main(void)
{
	int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int i, j;
	int t;

	i = 0;
	j = 7;
	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		
		i++;  //++i;
		--j;
	}

	for (i=0; i<8; ++i)
		printf("%d\n", a[i]);

	return 0;

}
/*
	在VC++6.0中的输出结果是：
----------------------
			8
			7
			6
			5
			4
			3
			2
			1
----------------------
*/