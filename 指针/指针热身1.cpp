# include <stdio.h>

int main(void)
{
	int * p;			//p是变量名；int * 表示表示p变量存放的是int类型变量的地址
						//不表示定义一个叫* p的变量
						//p是变量名，p的数据类型是int * 类型；
						//所谓int * 类型：就是存放int变量地址的类型
	int i = 3;
	int j;
	p = &i;             
//	p = i;              //error 类型不一致，p只能存放int类型变量的地址，不能存放int类型变量的值
//  p = 55;             //error

	return 0;
}