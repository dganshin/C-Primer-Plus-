#include "stock10.h"
#include <iostream>

using std::cout;
int main() {
    cout << "Using constructor to create new objects\n";
    Stock stock1("NanoSmart", 12, 20);
    stock1.show();

    Stock stock2 = Stock("Boffo Objects", 2, 2);
    stock2.show();

    cout << "Assigning stock1 to stock2\n";
    stock2 = stock1;
    stock1.show();
    stock2.show();

    cout << "Using constructor to reset an object\n";
    stock1 = Stock("Nifty Foods", 10, 50);
    cout << "revise stock1\n";
    stock1.show();
    cout << "Done\n";

    return 0;
}