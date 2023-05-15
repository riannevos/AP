#pragma once
#include <iostream>

#include "include/cat.hpp"

Cat::Cat(int age): Animal(age), sound("Miauw"){};

void Cat::makeSound() const{
    std::cout << sound << "\n";
}