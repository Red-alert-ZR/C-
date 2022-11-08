#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
#include <stdlib.h> 3
#define N 8
#define M 5
int main()
{
	
	int i, t, n, a[N];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	t = a[0];
	for (i = 0; i < n; i++)
		a[i] = a[i + 1];
	a[n - 1] = t;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	system("pause");
	return 0;
}
