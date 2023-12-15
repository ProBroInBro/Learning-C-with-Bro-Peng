#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 6.内容：选择语句和循环语句



// 选择语句之 if else 语句
// 在C语言中，为了实现选择，可以使用if else 和 switch 语句（这期不包含switch语句）。

//int main()
//{
//		// 声明整数变量input，用于储存输入的值
//
//	int input = 0;
//	printf("要好好学习吗？(1或0)\n");
//
//		// 使用 scanf 函数读取用户输入的整数值
//
//	scanf("%d", &input);
//
//		// 如果整数值为1，则执行以下代码块
//
//	if (input == 1)
//	{
//		printf("走上人生巅峰\n");
//	}
//	
//		// 如果整数值不为1，则执行以下代码块
//
//	else 
//	{
//		printf("回家卖红薯\n");
//	}
//	return 0;
//}





		// 循环语句之 while 语句
		// 在C语言中，为了实现循环，可以使用 while, for, 和 do while 语句（这期不包含 for 和 do while 语句）。
		// 例如要实现以下循环：

		// 写代码，若行数小于20000行，则继续写代码。若行数大于20000行，则停止写代码。


int main()
{
	// 声明一个整数变量 line，用于追踪循环的次数
	int line = 0;
	printf("学习C语言中…\n");

	// 使用循环打印一条消息，表示写代码的过程，循环执行直到 line 达到 20000
	while (line < 20000)
	{
		// 输出当前循环次数
		printf("已写%d行代码，继续加油！\n", line);

		// 增加 line 的值，表示已经完成一次循环
		line++;
	}

	// 当 line 大于等于 20000 时，输出找到好工作，走上人生巅峰
	if (line >= 20000)
	{
		printf("找到好工作，走上人生巅峰");
	}

	else
	{
		printf("继续加油！");
	}

	return 0;
}


