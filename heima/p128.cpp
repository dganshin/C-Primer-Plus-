#include <iostream>
using namespace std;

class Father1 {
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son1 : public ::Father1 {
public:
    void fun() {
        m_A = 10; // public
        m_B = 10; // protected
        // m_C = 10; // 无法访问
    }
};
class Son2 : protected ::Father1 {
public:
    void fun() {
        m_A = 10; // public
        m_B = 10; // protected
        // m_C = 10; // 无法访问
    }
};

void test01() {
    Son1 s1;
    s1.m_A = 100;
    Son2 s2;
}
int main() {

    return 0;
}