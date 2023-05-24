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

    // std::cout << c1adr << "\n";
    // std::cout << *c1adr <<"\n"; //Met * halen we het object uit het adres
    // std::cout << c1; //Is het zelfde als de regel hierboven

    //haal attribuut uit pointer (adres)


    //voorbeeld met vectoren
    std::vector<Car> cars = {c1, c2};
    c1.brand = "Honda";

    // for(Car c: cars){
    //     std::cout << c;
    // }

    std::vector<Car*> carAdresses = {&c1, &c2};
    c1.brand = "Citroen";

    for(Car* car: carAdresses){
        std::cout << car->brand;
    }


    return 0;
}