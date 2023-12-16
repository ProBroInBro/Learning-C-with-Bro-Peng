#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//						//7.内容：函数
//
//
//
//
//// 上次，我们使用了scanf函数和int类型实现了计算两个输入整数之和的程序，代码如下：
//
////int main()
////{
////	// 声明两个整数变量
////	int num1 = 0;
////	int num2 = 0;
////
////	// 输入两个整数变量
////	scanf("%d %d", &num1, &num2);
////	
////
////	// 求这两个整数的和
////	int sum = num1 + num2;
////
////	// 打印结果
////	printf("%d\n", sum);
////	return 0;
////}
//
//
//
//		// 现在，我们可以通过add函数来实现同样的效果，代码如下：
//
//
//// 函数声明：定义一个名为 add 的函数，接受两个整数参数并返回它们的和
//int add(int x, int y)
//{
//	// 函数定义：实现 add 函数的功能，返回两个整数的和
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	scanf("%d %d", &num1, &num2);
//
//	// 调用 add 函数计算两个整数的和
//	int sum = add(num1, num2);
//
//	// 输出计算结果
//	printf("%d\n", sum);
//	return 0;
//}


// 在这段add函数的代码中，
// int add(int x, int y)		int是返回类型		add是函数名		int x 和 int y 是函数的参数
//{
//	int z = 0;		----------->			
//	z = x + y;		----------->	这三行是函数体	
//	return z;		----------->	
//}


// 也可以将这段add代码优化，变为：
//int add(int x, int y)
//{
//	return(x + y);
//}



		// 题目联系1：写一个函数，求两个整数的较大值。

		
		// 声明函数Max，用于比较两个整数的大小。
//int Max(int x, int y)
//{
//	if (x > y)
//	return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	// 求两个整数的较大值
//	int r = Max(a,b);
//	printf("更大的值是：%d\n", r);
//	
//	return 0;
//}


		

		// 题目练习2：已知一个函数y=f(x)。当x<0时，y=1；当x=0时，y=0；当x>1时，y=-1
		// 要求：输入：1行，输入一个整数x(-10000<x<10000)
		// 输出：1行，输出y的值。

int main()
{
	// 输入
	int x = 0;
	int y = 0;
	scanf("%d", &x);

	// 计算
	if (0 < x < 10000)
		y = -1;
	else if (x = 0)
		y = 0;
	else (-10000 < x < 0);
		y = 1;

	// 输出
	printf("y的值是：%d\n", y);
	return 0;
}
		