/*
	2019年8月18日13:51:06
*/
# include <stdio.h>

int main(void)
{
	/*int i, j;
	scanf("%d %d", &i, &j);//输入12，没有反应；输入1 2，结果为1,2；
	printf("i = %d, j = %d\n", i, j);//输入12（没空格）默认还需要输入一个数;
	*/

	int i, j, k;
	scanf("%d,%d,%d", &i, &j, &k);
	printf("i = %d, j = %d, k = %d\n", i, j, k);
	
	return 0;
}
/*
	在VC++6.0中的输出结果是：
-----------------
i = 1, j = -858993460, k = -858993460（逗号与空格）
-----------------
*/