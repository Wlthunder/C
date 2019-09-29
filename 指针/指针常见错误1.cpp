# include <stdio.h>

int main(void)
{
	int * p;
	int i = 5;

	*p = i;             //不写p =&i；p也有指向，*p表示以p存储的垃圾值为内容的地址 的变量
						//写*p = i；会再内存中占用了一个以垃圾值为地址的单元，这个空间在VC中并没有分配
						//如果这个单元处于其他软件运行中，有可能会使软件崩溃—病毒
	printf("%d\n", *p);

	return 0;
}