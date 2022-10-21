#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
#include <string.h>

//字符串就是一串字符 - 用双引号括起来的一串字符

//int main()
//{
//	"abcdefg";
//	"hello bit";
//	return 0;
//}

int main()
{
	//字符串 - 数组是一组相同类型的元素
	//字符串在结尾的位置隐藏了一个\0字符串
	//\0是字符串的结束标志

	//char arr[] = "hello";
	char arr1[] = "abc";					//	abc\0
	char arr2[] = {'a', 'b', 'c', '\0'};			//	abc

	//求一下字符串的长度
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//int len = strlen("abc");	//string length
	//printf("%d\n", len);

	//打印字符串
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);
	*/

	return 0;

}
