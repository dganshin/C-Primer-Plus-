#include <iostream>
using namespace std;

class Person {
public:
    int m_A;
    int m_B;
    Person(int x, int y) {
        this->m_A = x;
        this->m_B = y;
    }
    // 尽量不用成员函数实现左移<<运算
};

ostream &operator<<(ostream &cout, Person p) {
    cout << p.m_A << ' ' << p.m_B; // 最好不带换行
    return cout;
}
int main() {
    Person p(10, 8);
    // cout << p.m_A << ' ' << p.m_B << '\n';
    cout << p << endl;
}