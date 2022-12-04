/*
函数fun是根据输入n，求下面分母为n以内(包含n)的素数构成的数列的和 ，输入10，输出：-0.138095。
要求在fun函数的注释语句之间编写程序，其它部分不得增删语句。
*/
#include<stdio.h>
#include<stdlib.h>
int prime(int p)    //判断素数
{
	int i, flag = 1;
	if (p <= 1)
		return 0;
	if (p == 2)
		return 1;
	for (i = 2; i < p; i++)
	{
		if (p % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
double fun(int n)
{
/*************************Begin*********************/
	int i, k, x = 1;
	double z = 0.0,j=1;
	for (i = 1; i <= n; i++)
	{
		if (prime(i))
		{
			z += (j / i) * x;
			x = -1 * x;
			j++;
		}
	}
	return z;
	
/**************************End**********************/
}
int main()
{
	int n;
	double s,x;
	FILE *in,*out;
	printf("输入n:");
	scanf("%d",&n);
	s=fun(n);
	printf("%lf\n",s);

	system("pause");
	return 0;	
}
