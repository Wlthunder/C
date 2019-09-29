/*
	2019年8月26日21:15:16
	通过函数完成对结构体变量的输入和输出
*/
# include <stdio.h>
# include <string.h>

struct Student          //结构体的长度：字符填充
{
	int age;
	char sex;
	char name[100];
}; //分号不能省

void InputStudent(struct Student *);    //InputStudent函数前置声明
void OutputStudent(struct Student ss);  //OuputStudent函数前置声明

int main(void)
{
	struct Student st;

	InputStudent(&st);					//函数：对结构体变量输入
	printf("%d %c %s\n", st.age, st.sex, st.name);
	
	OutputStudent(st);					//函数：对结构体变量输出

	return 0;
}

void OutputStudent(struct Student ss)     //形参ss和主函数st值一样
{
	printf("%d %c %s\n", ss.age, ss.sex, ss.name);
}


void InputStudent(struct Student * pstu)  //pstu只占4个字节
{
	pstu->age = 10;
	strcpy(pstu->name, "张三");
	pstu->sex = 'F';
}
/*
//本函数无法修改主函数st的值
void InputStudent(struct Student stu)  
{
	stu.age = 10;
	strcpy(stu.name, "张三");  //不能写成 stu.name = "张三";字符串知识
	stu.sex = 'F';

}
*/