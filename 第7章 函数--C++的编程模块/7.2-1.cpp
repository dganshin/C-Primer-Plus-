/*******************************************
 * Author: dganshin, dganshin@qq.com
 * Algorithm code in C++
 ******************************************/
/* 省略号作参数 */

#include <cstdarg>
#include <iostream>

void printNumbers(int count, ...) {
    va_list args;          // 声明一个va_list类型的变量, 用来访问变长参数
    va_start(args, count); // 初始化va_list, 并指向第一个可变参数

    for (size_t i = 0; i < count; i++) {
        int num = va_arg(args, int); // 获取当前参数并指定类型为int
        std::cout << num << " \n"[i == count - 1];
    }
    va_end(args); // 清理va_list
}

int main() {
    printNumbers(2, 19, 10);
    printNumbers(5, 1, 2, 3, 4, 5);
    return 0;
}

/*
printNumbers(int count, ...) 中的 ... 表示函数可以接受除 count 以外的任意数量的参数。
va_list args：用于存储参数列表。
va_start(args, count)：初始化可变参数列表，第二个参数是可变参数之前的最后一个已知参数。
va_arg(args, int)：获取下一个参数，并指定类型为 int。
va_end(args)：结束参数列表的访问。
*/