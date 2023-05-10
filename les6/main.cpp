#include "src/include/vector.hpp"
#include <iostream>

int main() {

    Vector v(3, 4);
    Vector w(10, 11);

    Vector z = v.operator+(w);
    Vector z = v + w;


    return 0;
}