/*
	2019年8月20日11:31:15
	求1-100之间所有能被3整除的数字之和
*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=1; i<=10; ++i)
	{
		if (i%3 == 0)
		sum = sum + i;  //if只能控制一个语句；
	printf("sum = %d\n", sum);  //不管if成不成立，这句都要执行。
	}
	
	printf("sum = %d\n", sum);

	return 0;
}
/*
---------------------------------
在VC++6.0中的输出结果是：
sum = 0 //1
sum = 0 //2
sum = 3    //3   
sum = 3 //4
sum = 3 //5
sum = 9    //6
sum = 9 //7
sum = 9 //8
sum = 18   //9
sum = 18 //10 
sum = 18 //11 （退出循环）
---------------------------------
*/