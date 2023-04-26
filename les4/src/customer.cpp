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


std::ostream& operator<<(std::ostream& out, Customer& renter){
    std::string output = "Name: " + renter.getName() + "(discount: " + std::to_string(renter.discountPercentage) +")";
    out << output;
    return out;
}