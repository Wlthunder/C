# include <stdio.h>

void f(int * pArr, int len)         //发送值的过程 等价于 pArr = &a[0]，pArr指向a[0]  //a == &a[0]
{
	int i;							//在f函数内部对pArr[i]这个数组进行操作；相当于在main函数对a数组进行操作，
									//因为给数组分配的空间是固定的，利用指针在函数中改变了空间中的值
	for (i=0; i<len; ++i)
		printf("%d\n", *(pArr+i));  //*(pArr+i)=pArr[i]   *(pArr+2) == pArr[2] == *(a+2) == a[2]
}

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
//	a = &a[2];                     //错误，指针常量的值是指针，因为是常量，所以不能被赋值
//	a == &a[0];
	f(a, 5);

	printf("%#X, %#X\n",a, &a[0] );

	return 0;
}