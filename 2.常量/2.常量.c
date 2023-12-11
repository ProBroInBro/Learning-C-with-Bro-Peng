#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C语言中的常量分为以下几种：
//1.字面常量
//2.const修饰的常变量
//3.#define定义的标识符常量
//4.枚举常量

//1.字面常量
//int main()
//{
//	10;
//	3.14;
//	'w'; //字符（单引号）
//	"abcd"; //字符串（双引号）
//	return 0;
//}



//2.const修饰的常变量
//int main()
//{
//	const int a = 10; //在C语言中，被const修饰的a本质是变量，但不能直接修改，具有常量的属性。
//	printf("a=%d\n", a);
//	return 0;
//}


//3.#define定义的标识符常量

//#define MAX 100
//
//int main()
//{
//	printf("MAX=%d\n", MAX);
//	return 0;
//}


//4.枚举常量

// 定义一个枚举类型
//enum Weekday {
//    SUNDAY,    // 默认值为 0
//    MONDAY,    // 默认值为 1
//    TUESDAY,   // 默认值为 2
//    WEDNESDAY, // 默认值为 3
//    THURSDAY,  // 默认值为 4
//    FRIDAY,    // 默认值为 5
//    SATURDAY   // 默认值为 6
//};
//
//int main() {
//    // 声明枚举变量
//    enum Weekday today;
//
//    // 给枚举变量赋值
//    today = WEDNESDAY;
//
//    // 使用枚举变量
//    if (today == WEDNESDAY) {
//        printf("今天是星期三\n");
//    }
//
//    return 0; 
//    
//        在这个例子中，我们定义了一个枚举类型 Weekday，其中包含了一组星期的枚举常量。
//        枚举常量默认从0开始递增，但你也可以手动指定它们的值。
//        在 main 函数中，我们声明了一个 Weekday 类型的枚举变量 today，并将其赋值为 WEDNESDAY。
//        然后，我们使用 if 语句检查 today 是否等于 WEDNESDAY，如果是，则输出相应的消息。
