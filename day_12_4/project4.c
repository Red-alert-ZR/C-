/*
函数fun是根据输入n，求下面数列前n项的和 ，
输入10 ，结果：0.206936。要求在fun函数的注释语句之间编写程序，其它部分不得增删语句。
*/
#include<stdio.h>
#include<stdlib.h>
double fun(int n)
{
/**********************Begin*********************/
	int i, m=1;
	double sum = 0.0, k = 1, j = 1;
	for (i = 1; i <= n; i++)
	{
		j *= 2 * i;
		k *= (2 * i - 1);
		sum = (k / j) * m + sum;
		m = -1 * m;
	}
	return sum;

/**********************End*********************/
}
int main()
{
	int n;
	double s;
	FILE *in,*out;
	printf("输入n:");
	scanf("%d",&n);
	s=fun(n);
	printf("%lf\n",s);

	system("pause");
	return 0;
}
