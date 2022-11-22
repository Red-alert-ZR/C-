#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
#include <stdlib.h> 3
#include <string.h> 4
#define N 1000
int main()
{
	int a = 100, b = 10;
	int* p1, * p2, * p3;
	p1 = &a; p2 = &b;
	p3 = p1; p1 = p2; p2 = p3;
	printf("%d %d\n", *p1, *p2);
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}

//C语言指针的基础定义
