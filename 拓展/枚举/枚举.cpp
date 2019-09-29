# include <stdio.h>

enum week  //定义了一个数据类型，并没有定义变量，数据类型名字是enum week
{
	Monday=4, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday  //monday默认是0
};

int main(void)
{
//	int day;  //定义成int类型不合适 
	enum week today = Wednesday;//这个类型只能输出0-6这7个数字中某1个
	printf("%d\n", today);   //输出结果是6

	return 0;
}