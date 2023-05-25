#include <iostream>
#include <string>
#include <vector>
class Car {
public:
    std::string brand;

    Car(std::string brand) : brand(brand){};

    friend std::ostream& operator<<(std::ostream &os, Car &car) {
        os << "Brand of car: " << car.brand << "\n";
        return os;
    }
};

int main() {
    Car c1("Volvo");
    Car c2("Mercedes");

    Car* c1adr = &c1; // sla adres van c1 op
    Car* c2adr = &c2; // sla adres van c2 op

    //We printen het adres van c1
    std::cout << c1adr << "\n";

    std::cout << *c1adr <<"\n"; //Met * halen we het object uit het adres
    std::cout << c1; //Doet hetzelfde als de regel hierboven



    //voorbeeld met vectoren
    std::vector<Car> cars = {c1, c2};
    c1.brand = "Honda";

    //Als we c1 aanpassen nadat die aan de vector toegevoegd is, zal het object in de vector niet veranderen (Dit is een copy)
    for(Car c: cars){
         std::cout << c;
    }

    //Als we pointers in de vector stoppen, dan verwijst die wel naar het veranderde object
    std::vector<Car*> carAdresses = {&c1, &c2};
    c1.brand = "Citroen";

    for(Car* car: carAdresses){
        std::cout << car->brand;
    }
    //We gebruiken -> om een attribuut op te halen uit een pointer. Dit is gelijk aan (*car).brand


    return 0;
}