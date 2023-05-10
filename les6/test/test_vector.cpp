#define CATCH_CONFIG_MAIN  
// This tells Catch to provide a main() - only do this in one cpp file

#include "include/catch.hpp"
#include "../src/include/vector.hpp"

bool operator==(const Vector& lhs, const Vector& rhs){
    return (lhs.x == rhs.x) && (lhs.y == rhs.y);
}

TEST_CASE("The constructor actually assigns the provided values to the attributes", "Vector constructor"){
    Vector v(4,3);
    REQUIRE(v.x == 4);
    REQUIRE(v.y == 3);
}

TEST_CASE("aftrekken werkt met 2 verschillende vectoren", "2-plaatsige operator-"){
    Vector v(3,4);
    Vector w(10,11);
    REQUIRE(v-w == Vector(-7,-7));
}

TEST_CASE("aftrekken werkt met 2 dezelfde vectoren", "2-plaatsige operator-"){
    Vector v(3,4);
    REQUIRE(v-v == Vector(0,0));
}




