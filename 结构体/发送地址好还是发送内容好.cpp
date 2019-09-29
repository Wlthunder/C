/*
	2019年8月26日21:17:57
	指针的优点之一：
		快速的传递数据；
		耗用内存少；
		执行速度快；
*/
# include <stdio.h>
# include <string.h>

struct Student          
{
	int age;
	char sex;
	char name[100];
}; 

void InputStudent(struct Student *);     //InputStudent函数前置声明
void OutputStudent(struct Student *);    //OuputStudent函数前置声明

int main(void)
{
	struct Student st;					

	InputStudent(&st);					
	printf("%d\n", sizeof(st));         //st占108个字符不是105，直接发送内容的话耗用内存多
	
	OutputStudent(&st);					//函数：对结构体变量输出，为了减少内存的耗费，也为了执行速度，推荐发送地址

	return 0;
}

void OutputStudent(struct Student * pst)     //形参ss和主函数st值一样
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
}

void InputStudent(struct Student * pstu)     //pstu只占4个字节
{
	pstu->age = 20;
	strcpy(pstu->name, "张三");
	pstu->sex = 'M';
}
/*
	总结：
---------------------------------------------------------
现实问题程序分三步：存储、操作（对数据进行操作）、输出
存储和操作问题— 数据结构（复杂）
数组、变量满足不了现实需求；树、图存储等（离不开指针）
理解不了指针，理解不了数据结构
指针使理解面向对象中 引用 的基础
---------------------------------------------------------
*/
