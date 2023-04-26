#pragma once
#include "include/car.hpp"

Car::Car(){
    this->type = "Unknown";
    this->dayPrice = -1;
}

Car::Car(std::string type, double dayPrice) {
    this->type = type;
    this->dayPrice = dayPrice;
}

std::string Car::toString() {
    return "Dit is een auto van het type "+ type + " deze kost " + std::to_string(dayPrice);
}

std::string Car::getType() {
    return type;
}