/*
	2019年8月26日09:51:32
	把一些 基本数据类型组合 在一起形成一个 新的复合数据类型，模拟复杂的食物
*/
# include <stdio.h>

struct Student   //定义了一个新的数据类型，叫结构体
{
	int age;
	float score;
	char sex;
};              //注意分号

int main(void)
{
	struct Student st = {80, 66.6, 'F'};  //用这个数据类型定义了一个变量st	
/*	int age;
	float score;
	char sex;
	int age2;
	float score2;
	char sex2;
*/
	return 0;
}