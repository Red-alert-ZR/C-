/*请编写函数fun,其功能是:计算并输出3到n之间所有素数的平方根之和。
例如,若主函数从键盘给n输入100后,则输出为sum=148.874270。
注意:n的值要大于2但不大于100。部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序: */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double fun(int n)
{
	/*************Begin*************/
	int i;
	float sum = 0;
	for (i = 3; i < n; i++)
	{
		int f = 1;
		{
			int k;
			for (k = 2; k <= i / 2; k++)
				if (i % k == 0)
				{
					f = 0; break;
				}
			if (f)
				sum = sum + sqrt(i);
		}

	};

	return sum;
		/*************End**************/
}
int main()
{
	int n;
	double sum;
	FILE* out, * in;
	printf("Input  N=");
	scanf("%d", &n);
	sum = fun(n);
	printf("\n\nsum=%lf\n\n", sum); 20
		/******************************/
		in = fopen("in36.dat", "r");
	out = fopen("out36.dat", "w");
	fscanf(in, "%d\n", &n);
	fprintf(out, "%lf\n", fun(n));
	fclose(in);
	fclose(out);
	/******************************/
	system("pause");
	return 0;
}
