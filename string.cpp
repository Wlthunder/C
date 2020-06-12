#include <stdio.h>

int main(void)
{
	int i;
	//通过%s输入
/*	char ch[101] = "\0";
	scanf("%s", ch);
	printf("%s\n", ch);
*/

	//通过for循环输入字符串
/*	char s[101] = "\0";
	for (i=0; i<10; i++)
		scanf("%c", &s[i]);		//abc 123 qwe

	for (i=0; i<10; i++)
		printf("%c", s[i]);		//abc 123 qw
*/

	//通过gets()输入
/*	char arr[100] = "\0";
	gets(arr);					//abc 123 qwer
	for (i=0; i<100; i++)
		printf("%c", arr[i]);	//abc 123 qwer空格空格空格···
*/

	//getchar的使用
/*	
	char Arr[101];
	for (i=0; i<10; i++)
		Arr[i] = getchar();		//abc 123 qwer
	for (i=0; i<10; i++)
		putchar(Arr[i]);		//或printf("%c", Arr[i]);	//abc 123 qw
*/

/*	char c;
	while ((c= getchar()) != '\n')
		putchar(c);
*/

	return 0;
}