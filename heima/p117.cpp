#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    // const 使得this所指的对象不能变
    // this本来的作用就是使得this只能指向该类里面的成员
    void showPerson() const {
        // this->m_A = 100;
        // this = NULL；
        this->m_B = 100;
    }
    Person();  // 构造函数
    ~Person(); // 析构函数

    void fun() {
    }
    int m_A;
    mutable int m_B; // 加上mutable之后可以修改this->m_B;
};

void test01() {
    Person p;
    p.showPerson();
}

void test02() {
    const Person p; // 常对象
    // p.m_A = 100;
    p.m_B = 100;
    // 常对象只能调常函数
    // p.fun(); // fun不加const不能正常调用
}
int main() {
    // test01();

    // test02();

    return 0;
}