#define _CRT_SECURE_NO_WARNINGS 1
//初识常量变量
#include <stdio.h>
//
int main()
{	
	//创建的一个变量
	//类型	变量的名字 = 0;//推荐
	//类型	变量的名字;	//不推荐

	int age = 20;
	double weight = 75.232;

	age = age + 1;
	weight = weight - 10;
	printf("%d\n", age);
	printf("%lf\n", weight);

	return 0;
}
//%d - 整形
//%f - float
//%ld - double

//全局变量 - {}外部定义的
int a = 100;

int main()
{
	//局部变量 - {}内部定义的
	//当局部变量和全局变量名字冲突的情况下，局部优先
	//不建议：把全局变量和局部变量的名字写成一样的 
	int a = 10;

	printf("%d\n", a);

	return 0;
}

//写一个代码求2个整数的和

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);//在源代码的第一行，加上：#define _CRT_SECURE_NO_WARNINGS 1
	//scanf_s函数 -VS编译提供,不是C语言标准规定的
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}

