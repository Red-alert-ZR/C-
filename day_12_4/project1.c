/*
函数fun()是根据正整数n，求下面数列的和 s=1+1/22+1/333+......+1/nn...nn
当输入n=5，s=1.04870057 ,注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的注释语句之间填入所编写的若干语句。
*/ 
#include<stdio.h>
#include<stdlib.h>
double fun(int n)
{
	/*********Begin*********/
	int x, j, m = 1;
	double k = 0.0;
	for (x = 1; x <= n; x++)
	{
		m = x;
		for (j = 0; j <= x-2; j++)
		{
			m = 10 * m + x;
		}

		k += 1.0 / m;
	}
	return k;
	/*********End*********/
}
int main()
{
	int n,i;
	double s;
	scanf("%d",&n);
	s=fun(n);
	printf("%.8lf\n",s);
       system("pause");
	return 0;
}
