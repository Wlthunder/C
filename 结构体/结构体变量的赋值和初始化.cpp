# include <stdio.h>

//第一种方式
struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {80, 66.6, 'F'}; //初始化  定义的同时可以整体赋初值
	
	struct Student st2;                  //不能写st2 = {80, 66.6, 'F'};可类比数组
	st2.age = 10;                        //如果定义完之后，只能单个的赋值
	st2.score = 88;
	st2.sex = 'F';

	printf("%d %f %c\n", st.age, st.score, st.sex);
	printf("%d %f %c\n", st2.age, st2.score, st2.sex);
	

	return 0;
}