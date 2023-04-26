#pragma once
#include <iostream>
#include <string>

class Customer{
    private:
    std::string name;

    public:
    double discountPercentage;

    Customer();
    Customer(std::string name);

    std::string toString();
    std::string getName();

    //overloaden van operator<< en overloaden operator==
    friend std::ostream& operator<<(std::ostream& out, Customer& c);
    friend bool operator==(Customer lhs, Customer rhs);

};