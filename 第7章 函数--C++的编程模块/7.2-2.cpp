#include <iostream>

template <typename T>

void print(T value) {
    std::cout << value << '\n';
}

template <typename T, typename... Args>

void print(T first, Args... args) {
    std::cout << first << ' ';
    print(args...); // 递归展开可变参数包
}
int main() {
    print(1, 2, 3.5, "hello", 'a');
    return 0;
}

/*
template<typename T, typename... Args> 中的 Args... 表示模板可以接受任意数量和任意类型的参数。
print(T first, Args... args)：递归地处理每一个参数，先输出第一个参数，然后使用递归调用来处理剩余的参数包 args...。
优势：相比于 C 风格的可变参数，这种方式能够保证类型安全并且更适用于现代C++。
*/