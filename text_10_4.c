#include <stdio.h>
///数据类型
//计算机语言 - 写程序 - 解决生活中的问题
//必须有能力来描述生活中的问题
//购物商城 - 上架产品，价格 - 15.6元 - 小数 - 1.56*10^1
//char			//字符串类型
//short			//短整型
//int			//整型
//long			//长整型
//long long		//更长的整形
//float			//单精度的浮点数
//double		//双精度的浮点数
//
//


//a
//'a' - 字符a	

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d =0.0;
//
//	return 0;
//}

int main()
{
	printf("hehe\n");
	printf("比特\n");
	printf("%d\n", 100);//打印一个整数
	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
	printf("%d\n", int(sizeof(char)));
	printf("%d\n", int(sizeof(short)));
	printf("%d\n", int(sizeof(int)));
	printf("%d\n", int(sizeof(long)));
	printf("%d\n", int(sizeof(long long)));
	printf("%d\n", int(sizeof(float)));
	printf("%d\n", int(sizeof(double)));

	return 0;
}
//计算机中的单位：
//bit - 比特位 
//byte - 字节 = 8 bit
//kb - 1024 byte
//mb - 1024 kb
//gb - 1024 mb
//tb - 1024 gb
//pb - 1024 tb
