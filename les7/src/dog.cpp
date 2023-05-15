#pragma once
#include <iostream>

#include "include/dog.hpp"

Dog::Dog(int age): Animal(age), sound("woef"){};

void Dog::makeSound() const {
    std::cout << sound << "\n";
}