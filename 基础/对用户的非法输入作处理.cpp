/*
	2019年8月18日14:13:32
*/
# include <stdio.h>

int main(void)
{
	int i;
	//char ch;

	scanf("%d", &i);
	printf("i = %d\n", i);
	
	/*
	while ((ch = getchar()) != '\n')
		continue;
	*/
	int j;
	scanf("%d", &j);
	printf("j = %d\n", j);
	return 0;
}
/*
在VC++6.0中的输出结果是：
						25
						i = 25
						6
						j = 6
*/