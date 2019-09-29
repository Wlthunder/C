/*
	2019年8月20日13:09:05
	1-100的奇数之和
	1-100的偶数之和
	1-100的奇数个数
	1-100的奇数平均值
*/
# include <stdio.h>

int main(void)
{
	int i, sum1 = 0, sum2 = 0, count = 0;//sum1为奇数和；sum2为偶数和
	float ave;                           //均值可能为小数；

	for (i=1; i<=100; ++i)
	{	
		if (i%2 == 1)      //除以2取余
		{
			sum1 += i;    //1-100奇数之和 sum1 = sum1 + i;
			++count;      //1-100奇数个数  count = count + 1;
		}
		else
			sum2 += i;    //1-100偶数之和
	}

	ave = 1.0*sum1/count;          //1-100奇数和的平均值；1.0默认是double类型注意一下，可能会丢失精度
	                               //ave = (float)(sum1) / (float)(count);
	
	printf("sum1 = %d sum2 = %d count = %d ave = %f\n", sum1, sum2, count, ave);

	return 0;
}