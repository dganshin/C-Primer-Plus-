#include "stock00.h"
#include <iostream>

int main() {
    Stock fluffy_the_cat;
    fluffy_the_cat.acquire("NanoSmart", 20, 12.5);
    fluffy_the_cat.show();

    return 0;
}