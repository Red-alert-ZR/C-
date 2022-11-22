#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
#include <stdlib.h> 3
#include <string.h>
#define N 1000
int main()
{
	char arr[] = "abcdefg";
	int num = strlen(arr);
	char c[40] = "C programming", str[12];
	strcpy(str, "  Language");
	strcat(c, str);
	printf("%s\n", strcat(c, str));

	
	system("pause");
	return 0;
}
