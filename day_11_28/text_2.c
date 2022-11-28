/*请编写一个函数fun,它的功能是:根据以下公式求Π的值(要求满足精度0.005,即某项小于0.005时停止迭代)。 
 /2=1+1/3+1*2/(3*5)+1*2*3/(3*5*7)+1*2*3*4/(3*5*7*9)+…+1*2*3*…*n/(3*5*7*…*(2n+1)) 
程序运行后,如果输入精度0.005,则程序输出3.132157。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序: */
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
double fun(double eps)
{
	/*************Begin************/
	double s;
	float n, t, pi;
	t = 1; pi = 0; s = 1.0; n = 1;
	while ((fabs(s)) >= eps)
	{
		pi += s;
		t = n / (2 * n + 1);
		s *= t;
		n++;
	}
	pi = pi * 2;
	return pi;


	/*************End**************/
}
int main()
{
  double x;
  FILE *wf,*in;
  printf("Input eps: ");
  scanf("%lf",&x);
  printf("\neps=%lf,PI=%lf\n",x,fun(x));
/******************************/
  in=fopen("in37.dat","r");
  wf=fopen("out37.dat","w");
  while(!feof(in))
  {
	fscanf(in,"%lf",&x);
  	fprintf (wf,"%lf\n",fun(x));
  }
  fclose(in);
  fclose(wf);
/*****************************/
system("pause");
return 0;
}
