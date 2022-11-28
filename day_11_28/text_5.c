/*请编写函数fun,其功能是计算并输出如下多项式的值: Sn=l+1/1!+1/2!+1/3!+1/4!+…+1/n! 
例如,若主函数从键盘给n输入15,则输出为S=2.718282。
注意:n的值要求大于1但不大于100。部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序: */
#include <stdio.h>
#include<stdlib.h>
double fun(int n)
{
	/***********Begin*************/
	double sum = 0.0, f0, f1 = 1.0, t = 1.0;
	int i = 1;
	for (i; i <= n; i++)
	{
		f0 = f1;
		t *= i;
		f1 = 1 / t;
		sum += f0;
	}

	return sum;
	/***********End****************/
}
int main()
{
  int n; 
  double s;
  FILE *out,*in;
  printf("\nInput n: "); 
  scanf("%d",&n);
  s=fun(n);
  printf("s=%lf\n",s);
  /******************************/
  in=fopen("in31.dat","r");
  out=fopen("out31.dat","w");
  fscanf(in,"%d\n",&n);
  fprintf(out,"%lf\n",fun(n));
  fscanf(in,"%d\n",&n);
  fprintf(out,"%lf\n",fun(n));
  fclose(in);
  fclose(out);
  /******************************/
system("pause");
 return 0;
}
