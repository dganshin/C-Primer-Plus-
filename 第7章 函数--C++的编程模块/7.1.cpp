/*******************************************
 * Author: dganshin, dganshin@qq.com
 * Algorithm code in C++
 ******************************************/
// defining, prototyping, and calling a function
// 函数的定义, 声明和调用
#include <iostream>

void simple(); // function prototype

int main() {
    std::cout << "main() will call the simple function:\n";
    simple();
    std::cout << "main() is finished with the simple() function.\n";
    return 0;
}
// function definition
void simple() {
    std::cout << "I'm but a simple function.\n";
}
