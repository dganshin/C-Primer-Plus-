#include <iostream>

inline double square(double x) {
    return x * x;
}
int main() {
    double a, b, c = 13.0;
    a = square(5.0);
    b = square(4.5 + 7.5);
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "c = " << c << '\n';
    std::cout << "square(c++) = " << square(c++) << '\n';
    std::cout << "after c++:\n";
    std::cout << "c = " << c << '\n';
    return 0;
}