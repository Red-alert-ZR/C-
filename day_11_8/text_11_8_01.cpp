#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
#include <stdlib.h> 3
int main()
{
	int a[5], n;
	int i, j;
	j = 0;
	printf("请输入一个整数（<10）:");
	scanf("%d", &n);
	for (i = 1; i < n; i++)
		if (n % i == 0)
			a[j++] = i;
	printf("约数为：\n");
	for (i = 0; i < j; i++)
		printf("%8d", a[i]);


	system("pause");
	return 0;
}
