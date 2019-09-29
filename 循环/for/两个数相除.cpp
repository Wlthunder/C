# include <stdio.h>

int main(void)
{
	int i = 10;
	int t = 3;
	float k;
	k = (float)i / (float)t;
	
	printf("k = %f\n", k);

	return 0;
}
/*
在VC++6.0中的输出结果是：
---------------------------------
k = 3.333333
=================================
*/