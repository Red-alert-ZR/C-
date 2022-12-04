   /*请编写函数fun,其功能是:将所有大于1小于整数m的非素数存入xx所指数组中,非素数的个数通过k传回。 
    例如,输入17,则应输出4 6 8 9 10 12 14 15 16。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
    试题程序: */
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int su(int s)
{
    int i, flag = 1;
    if (s <= 1)
        return 0;
    if (s == 2)
        return 1;
    for (i = 2; i < s; i++)
    {
        if (s % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int fun(int m, int xx[])
{
    /***************Begin************/
    int i, j=0;
    for (i = 2; i <= m; i++)
    {
        if (su(i)==0)
        {
            xx[j] = i;
            j++;
        }
    }
    /*************** End ************/
    return j ;
}
int main()
{
  FILE *wf,*in;
  int m, n,k, zz[100];
  printf("\nPlease enter an integer number between 10 and 100: ");
  scanf("%d",&n);
  m=fun(n,zz);
  printf("\n\nThere are %d non-prime numbers less than %d: ",m,n);
  for(n=0;n<m;n++)
    printf("%4d\n",zz[n]);

  system("pause");
  return 0;
}
