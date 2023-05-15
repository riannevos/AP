#include <iostream>
#include <string>

class Animal{
    public:
    int age;

    Animal(int age): age(age){}

    void poep(){
        std::cout <<"Drol";
    }

    virtual void makeSound() = 0;
};

class Cow: public Animal{
    public:
    std::string sound;

    Cow(int age, std::string sound):Animal(age), sound(sound){};

    void makeSound() override {
        std::cout << sound <<"\n";
    }
};


int myy_main(){

    Cow cow = Cow(5, "boe");
    cow.makeSound();

    return 0;
}
