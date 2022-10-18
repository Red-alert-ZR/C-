#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 2
//常量

#define MAX 10000


//int main()
//{
//	1、字面常量
//	3.14;
//	10;
//	'a';
//	"abcde";
//
//	2、count修饰的常变量
//	const int num = 10;//num就是常变量 - 具有常属性（不能改变的属性）
//	num = 20;
//	printf("num = %d\n", num);//20
//	int arr[10] = {0};//10个元素
//
//	const int n = 10;
//
//	int arr2[n] = {0};//n是变量的，这里是不行
//
//	3、#define 定义的标识符常量
//	MAX = 20000; //error
//	/*int m = MAX;
//	printf("m = %d\n", m );*/
//
//	return 0;
//}


//性别
enum Sex
{
	//这种枚举类型的变量的未来可能取值
	//枚举常量
	MALE = 3,//赋初值
	FEMALE = 1,
	SECRET
};
int main()
{
	//4、枚举常量
	//可以一一列举的常量

	enum Sex s = MALE;
	//MALE = 3;//error
	printf("s1 = %d\n", MALE);
	printf("s2 = %d\n", FEMALE);
	printf("s3 = %d\n", SECRET);

	return 0;
}
