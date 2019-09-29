# include <stdio.h>

int main(void)
{
	int i;                      //int i；逻辑会出错   float i;实际上是错误的—浮点数存储的问题
	float sum = 0;

	for (i=1; i<=100; ++i)
	{
		sum = sum + 1.0/i;          // 1/2 == 0；1/3 ==0；//或写成sum = sum + 1 / (float)(i);								  
	}
	
	printf("sum = %f\n", sum);

	return 0;
}
