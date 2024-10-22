// 全局函数做友元
#include <iostream>
#include <string>
using namespace std;

class Building {
    friend void goodGay(Building &building);

public:
    Building() {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
    string m_SittingRoom;

private:
    string m_BedRoom;
};

void goodGay(Building &building) { // 全局函数访问私有成员
    cout << "全局函数正在访问:" << building.m_SittingRoom << endl;
    cout << "全局函数正在访问:" << building.m_BedRoom << endl;
}

void test01() {
    Building building;
    goodGay(building);
}

char s[100];
int main() {
    test01();
    return 0;
}