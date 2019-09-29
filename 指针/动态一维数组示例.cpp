# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5];  //如果int占4个字节，本数组总共包含20个字节，每4个字节被当做一个int变量来使用
			   //静态构造

	int len;
	int * pArr;
	int i;
    //动态的构造一维数组
	printf("输入要存放的元素的个数：");
	scanf("%d\n", &len);
	pArr = (int *)malloc(4 * len);   //类似于int pArr[len];
	
	//对一维数组进行操作   如：对动态一维数组进行赋值
	for (i=0; i<len; ++i)
		scanf("%d", &pArr[i]);

	//对一维数组进行输出
	printf("一维数组的内容是：\n");
	for (i=0; i<len; ++i)
		printf("%d\n", pArr[i]);

	free(pArr);     //手动释放掉动态分配的数组，静态数组不能手动释放
	

	return 0;
}