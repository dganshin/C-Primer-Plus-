#include <iostream>
using std::cout;
class Person {
    // private:
public:
    int m_A;
    int m_B;
    Person operator+(const Person &p) { // 通过成员函数重载+号
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }
    Person(int x, int y) { this->m_A = x, this->m_B = y; }
    Person() {}
};

// Person operator+(const Person &p1, const Person &p2) {
//     Person temp;
//     temp.m_A = p1.m_A + p2.m_A;
//     temp.m_B = p1.m_B + p2.m_B;
//     return temp;
// }

Person operator+(Person p1, int x) {
    Person temp;
    temp.m_A = p1.m_A + x;
    temp.m_B = p1.m_B + x;
    return temp;
}

int main() {
    Person A(1, 2);
    Person B(3, 4);
    Person C = A + B;
    // 成员函数调用原型
    Person D = A.operator+(B);
    // 全局函数调用原型
    // Person D = operator+(A, B);
    cout << "A.m_A = " << A.m_A << "  A.m_B = " << A.m_B << '\n';
    cout << "B.m_A = " << B.m_A << "  B.m_B = " << B.m_B << '\n';
    cout << "C.m_A = " << C.m_A << "  C.m_B = " << C.m_B << '\n';
    return 0;
}