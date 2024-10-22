#include "stock00.h"
#include <iostream>

void Stock::acquire(const std::string &co, long n, double pr) {
    company = co;
    if (n < 0) {
        std::cout << "Number of shares can't be negative\n"
                  << company << " shares set to be 0\n";
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "Number of shares purchased can't be negative\n";
        std::cout << "Transaction is aborted\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    if (num < 0) {
        std::cout << "Number of shares sold can't be negative\n";
        std::cout << "Transaction is aborted\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}
void Stock::show() {
    std::cout << "Company:" << company << std::endl;
    std::cout << "shares:" << shares << std::endl;
    std::cout << "share price:" << share_val << std::endl;
    std::cout << "total worth:" << total_val << std::endl;
}