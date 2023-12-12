#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//3.内容：字符串


int main()
{
	// C语言中没有字符串类型
	// 'a'--> 常量（单引号）
	// "abcd"--> 字符串（双引号）
	char arr1[] = "abcdef";
	// F10单步执行-调试-窗口-监视-输入项，可以看到字符串最后有一项\0。
	// \0是字符串结束的标志，是字符串的结束标志，不计入字符串内容（但占用1字节）。
	// 这行代码长度为6，内存占用7字节。
	char arr2[] = { 'a','b','c','d','e','f' };
	// 这行代码的结尾没有\0。因为它没有 '\0' 来指示字符串的结束，所以输出时会有乱码。
	// 这行代码长度为6，内存占用6字节。
	char arr3[] = { 'a','b','c','d','e','f','\0' };
	// 在补上\0后，这行代码可以正常输出。
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);

	// strlen是一个计算字符串长度的函数。strlen = string length。
	// 使用时需要添加头文件#include <string.h>
	int length = strlen("abcd");
	printf("abcd字符串的长度是%d\n", length);
	// 说明了\0是字符串结束的标志，不计入字符串内容。
	return 0;
}