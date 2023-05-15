#include "include/cat.hpp"
#include "include/dog.hpp"

void rollCall(const Animal& a){
    a.makeSound();
}


int main(){
    Dog d1 = Dog(5);
    Cat c1 = Cat(4);

    rollCall(d1);
    rollCall(c1);

    return 0;
}