#pragma once
#include "include/customer.hpp"
#include <string>

Customer::Customer(){
    this->name = "unknown";
    this->discountPercentage = 0;
}
Customer::Customer(std::string name) {
    this->name = name;
    this->discountPercentage = 0;
}

std::string Customer::getName(){
    return this->name;
}

//Operator overloading, deze staat al gedefineerd als friend functie in customer.hpp
std::ostream& operator<<(std::ostream& out, Customer& renter){
    std::string output = "Name: " + renter.getName() + "(discount: " + std::to_string(renter.discountPercentage) +")";
    out << output;
    return out;
}

bool operator==(Customer lhs, Customer rhs){
    return ((lhs.getName() == rhs.getName()) && (lhs.discountPercentage == rhs.discountPercentage));
}