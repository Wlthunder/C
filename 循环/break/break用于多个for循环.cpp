# include <stdio.h>

int main(void)
{
	int i, j;

	for (i=0; i<3; ++i)
	{
		for (j=1; j<4; ++j)
		{
			printf("AAAA\n");
			break;  //break只能终止距离它最近的循环
		}
		printf("BBBB\n");
	}

	return 0;
}
/*
	2019年8月21日11:59:07
-------------------------
AAAA
BBBB
AAAA
BBBB
AAAA
BBBB
-------------------------
*/