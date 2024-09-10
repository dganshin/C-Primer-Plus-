/*******************************************
 * Author: dganshin, dganshin@qq.com
 * Algorithm code in C++
 ******************************************/
// protos using prototypes and function calls
#include <iostream>
void cheers(int);
double cube(double x);

int main() {
    cheers(5); // function call
    std::cout << "Give me a number:";
    double side;
    std::cin >> side;
    double volume = cube(side); // function call
    std::cout << "A " << side << "-foot cube has a volume of " << volume << " cubic feet.\n";
    cheers(cube(2)); // prototype protection at work
    return 0;
}

void cheers(int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "cheers!"
                  << " \n"[i == n - 1];
    }
}
double cube(double x) {
    return x * x * x;
}

void say_hi(...);