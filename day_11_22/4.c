#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
#include <stdlib.h> 3
#include <string.h>
#define N 1000
int main()
{
	//int b[2][2][2] = { 1,2,3,4,5,6,7,8 };
	//printf("%d\n", b[1][1][1]);
	char a[N], b[N];
	int i = 0;
	gets(a);
	gets(b);
	i = count(a,b);
	printf("%d\n",i);
	system("pause");
	return 0;
}

int count(char s[], char t[])
{
	int i, j, k, m = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = i; s[j] == t[k] && k < strlen(t);j++)
			k++;
		if (t[k] == '\0')
			m++;
	}
	return m;
}
