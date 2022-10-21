#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2

//初识转义字符
//int main()
//{
//	//printf("c:\test\test.c");
//	printf("ab\ncd");
//	return 0;
//}

int main()
{
	//printf("%c\n", '\'');
	printf("%s\n", "abc");
	printf("%s\n", "a");
	printf("%s\n", "\"\"");
	printf("c:\\test\\test.c");
	printf("\a");
	printf("\b\n");
	printf("%c\n", '\130');		//八进制表示
	//X -- ASCII码值为88

	printf("%c\n", '\101');			//A - 65 - 8进制：101
	printf("%c\n", '\x30');			//48 - '0'
	printf("%d\n", strlen("abc"));	//3

	printf("%d\n", strlen("c:\text\328\text.c"));	//14

	return 0;
}
//printf在打印数据的时候，可以打印的格式
//printf("%d", 100);
//printf("%c", 'a');
//printf("%s", "abc");
