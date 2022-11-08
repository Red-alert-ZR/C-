#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
#include <stdlib.h> 3
#define N 8
#define M 5
int main()
{
	int N;
	int x[N], i, max, min;
	printf("输入N个整数:\n");
	scanf("%d",&N);
	for (i = 0; i < N; i++)
		scanf("%d", &x[i]);
	max = min = x[0];
	for (i = 1; i < N; i++)
	{
		if (max < x[i]) max = x[i];
		if (min > x[i]) min = x[i];
	}
	printf("分数最高分数是：%d\n", max);
	printf("分数最低分数是：%d\n", min);
	system("pause");
	return 0;
}
