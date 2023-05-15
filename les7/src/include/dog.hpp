#pragma once
#include <string>
#include "animal.hpp"

class Dog : public Animal{

    public:
    std::string sound;

    Dog(int age);

    void makeSound() const override;
};