#include "include/vector.hpp"
#include <iostream>

int main() {

    Vector v(3, 4);
    Vector w(10, 11);
    Vector z;

    // Hieronder een voorbeeld van += bij integers
    int a = 7;
    int b = 8;

    z = -w;    // dit roept w.operator-() aan
    z = w - v; // dit roept w.operator-(v) aan.

    a += b; // kort voor a = a + b

    w -= v; // Dit roept w.operator-=(v) aan. Hierna is v=(3,4) en w = (7,7).

    return 0;
}