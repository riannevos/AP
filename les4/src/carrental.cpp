#pragma once
#include "include/carrental.hpp"

//klasse naam :: constructor
CarRental::CarRental(Car rentedCar, Customer renter, int rentalDays){
    this->rentedCar = rentedCar;
    this->renter = renter;
    this->rentalDays = rentalDays;
}
double CarRental::totalPrice(){
    return this->rentalDays * this->rentedCar.dayPrice;
}
std::string CarRental::toString(){
    return "beschrijf carrental";
}