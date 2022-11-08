#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
#include <stdlib.h> 3
#define N 8
#define M 5
int main()
{

	int i, j, k = 0, a[N], b[M], c[N];
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < M; i++)
		scanf("%d", &b[i]);
	for (i = 0; i < N; i++)

	{
		for (j = 0; j < M; j++)
			if (a[i] == b[j])break;
		if (j >= M)
		{
			c[k] = a[i]; k++;
		}
	}
	for (i = 0; i < k; i++)
		printf("%5d", c[i]);
		printf("\n");
  system("pause");
	return 0;
}
