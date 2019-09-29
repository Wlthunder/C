/*
	2019年8月18日14:01:06
*/
# include <stdio.h>

int main(void)
{
	
	int i, j, k;

	printf("输入三个值，中间以逗号分隔\n");//提示信息
	scanf("%d,%d,%d", &i, &j, &k);//不要加\n
	printf("i = %d, j = %d, k = %d\n", i, j, k);
	

	return 0;
}