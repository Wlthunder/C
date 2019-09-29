# include <stdio.h>

struct Student
{
	int age;
	char sex;
	char name[100];
};                 //分号不能省

int main(void)
{
	struct Student st = {20, 'F', "张三"};
	struct Student *pst = &st;

	printf("%d %c %s\n", st.age, st.sex, st.name);  //这是通过变量名的方式
	printf("%d %c %s\n", pst->age, pst->sex, pst->name); //通过指针的方式  pst->age转化成(*pst).age 等价于 st.age
	
	return 0;
}