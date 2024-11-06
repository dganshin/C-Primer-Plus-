#include <iostream>
using namespace std;

class MyInt {
    friend ostream &operator<<(ostream &cout, MyInt myint);

public:
    MyInt() { m_num = 0; }

    // 重载前置++
    MyInt &operator++() { // 前置递增返回引用
        m_num++;          // 先++
        return *this;     // 再返回
    }
    // 重载后置++
    MyInt operator++(int) // 站位参数int，用于区分前置和后置， 后置递增返回值
    {
        MyInt t = *this;
        m_num++;
        return t;
    }

    // 前置递减--
    MyInt &operator--() {
        m_num--;
        return *this;
    }
    // 后置递减
    MyInt operator--(int) {
        MyInt t = *this;
        m_num--;
        return t;
    }

private:
    int m_num;
};

ostream &operator<<(ostream &cout, MyInt myint) {
    cout << myint.m_num;
    return cout;
}

int main() {
    // int a = 10;
    // cout << (++a)++ << '\n';
    MyInt myint;
    // cout << ++(++myint) << '\n';
    cout << (myint--)-- << '\n';
    int a = 0;
    cout << (a--)-- << '\n';
    cout << myint;
    return 0;
}