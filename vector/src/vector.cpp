#include "include/vector.hpp"

Vector::Vector(){
    x = 0;
    y = 0;
}

Vector::Vector(int x, int y){
    this->x = x;
    this->y = y;
}

Vector Vector::operator-() const {
    return Vector(-x, -y);
}

Vector Vector::operator-(const Vector& rhs) const{
    return Vector(x-rhs.x, y - rhs.y);
}


Vector& Vector::operator-=(const Vector& rhs){
    x -= rhs.x;
    y -= rhs.y;
    return *this;
}