#pragma once
#include <string>
#include "animal.hpp"

class Cat : public Animal{
    public:
    int age;
    std::string sound;

    Cat(int age);

    void makeSound() const override;
};