#pragma once
#include "car.hpp"
#include "customer.hpp"

//Deze samen maken
class CarRental{
    public:
        Car rentedCar;
        Customer renter;
        int rentalDays;

    CarRental(Car rentedCar, Customer renter, int rentalDays);
    double totalPrice();
    std::string toString();


};