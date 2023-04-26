#pragma once
#include <iostream>
#include <string>

class Car {
private:
    std::string type;

public:
    double dayPrice;

    Car();
    Car(std::string type, double dayPrice);
    std::string toString();
    std::string getType();

};