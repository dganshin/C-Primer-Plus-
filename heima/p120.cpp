#include <iostream>
#include <string>
using namespace std;

class Building;
class GoodGay {
public:
    GoodGay();
    void visit();
    void visit2();
    Building *building;
};

class Building {
    friend void GoodGay::visit();

public:
    Building();
    string m_SittingRoom;

private:
    string m_BedRoom;
};

GoodGay::GoodGay() {
    building = new Building;
}

Building::Building() {
    m_BedRoom = "卧室";
    m_SittingRoom = "客厅";
}

void GoodGay::visit() {
    cout << "visit正在访问:" << building->m_SittingRoom << '\n';
    cout << "visit正在访问:" << building->m_BedRoom << '\n';
}
void GoodGay::visit2() {
    cout << "visit2正在访问:" << building->m_SittingRoom << '\n';
    // cout << "visit2正在访问:" << building->m_BedRoom << '\n';
}

void test01() {
    GoodGay gg;
    gg.visit();
    gg.visit2();
}
int main() {
    test01();
    return 0;
}