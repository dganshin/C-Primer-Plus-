#include <iostream>
using namespace std;

class A {
public:
    int *data;
    A(int d) {
        data = new int(d);
        cout << "A的构造函数\n";
    }
    ~A() { cout << "A的析构函数\n"; }
    A(const A &other) {
        // 浅拷贝：复制指针地址而不是重新分配内存
        data = other.data;
        cout << "A的浅拷贝构造函数\n";
    }
};
void fun(A a) {
    cout << *(a.data) << endl;
}
// A a(0);
int main() {
    cout << "begin\n";
    A tmp(0);
    fun(tmp); //(1)
    cout << "结束\n";
    return 0; //(2)
}
