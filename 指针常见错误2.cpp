# include <stdio.h>

int main(void)
{
	int i = 5;
	int * p;
	int * q;

	p = &i;
//	*q = p;     //error 指针变量不能赋给普通变量
//	*q = *p;    //error 参考指针常见错误1
//	p = q;      //error 不能对*q的内容进行读 写，q的空间属于本程序，*q代表另外一个不知道的单元，VC没有权限读取
	            //       因为*q所代表的的内存单元控制权限并没有分配给本程序
	q = p;      //把i的地址而不是p的地址 赋给 q；

	printf("%d\n", q);
	printf("%d\n", *q);

	return 0;
}