#pragma once

class Animal{
    public:
    int age;

    Animal(int age);

    virtual void makeSound() const = 0;
};