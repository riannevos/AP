#include <iostream>
#include <string>
#include "include/vector.hpp"

//Andere (betere) notatie voor de constructor. Dit is efficentier bij de initialisatie.
Vector::Vector(): x(0), y(0) {}

Vector::Vector(int x, int y): x(x), y(y) {}

Vector Vector::operator-() const {
    return Vector(-x, -y);
}

Vector Vector::operator-(const Vector& rhs) const {
    return Vector(x - rhs.x, y - rhs.y);
}

Vector &Vector::operator-=(const Vector& rhs) {
    x -= rhs.x;
    y -= rhs.x;
    return *this;
}

std::ostream& operator<<(std::ostream& os, Vector& vector){
    std::string output = "(" + std::to_string(vector.x) + "," +std::to_string(vector.y) + ")";
    os << output;
    return os;
}