#include <iostream>
using namespace std;

// class Java {
// public:
//     void header() {
//         cout << "public head\n";
//     }
//     void footer() {
//         cout << "public foot\n";
//     }
//     void left() {
//         cout << "left\n";
//     }
//     void content() {
//         cout << "Java\n";
//     }
// };
// Python C++...

// 继承: 减少重复代码
// class 子类 public : 继承方式 父类
// 子类:派生类, 父类:基类
class BasePage {
public:
    void header() {
        cout << "public head\n";
    }
    void footer() {
        cout << "public foot\n";
    }
    void left() {
        cout << "left\n";
    }
};

class Java : public BasePage {
public:
    void content() {
        cout << "Java\n";
    }
};
class Python : public BasePage {
public:
    void content() {
        cout << "Python\n";
    }
};
class CPP : public BasePage {
public:
    void content() {
        cout << "CPP\n";
    }
};
void test01() {
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
}
void test02() {
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
}

int main() {
    test01();
    cout << "-------------\n";
    test02();
    return 0;
}