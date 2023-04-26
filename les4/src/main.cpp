#include <ctime>
#include <iostream>
#include <vector>

#include "include/car.hpp"
#include "include/carrental.hpp"
#include "include/customer.hpp"

// function overloading

int add(int a, int b) {
    return a + b;
}

double add(int a, double b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {

    double x = 3.5;
    int y = 2;

    // welke add wordt nu aangeroepen?
    add(y, x);

    Car car1 = Car("Peugeot", 100);
    Customer customer1 = Customer("Rianne");
    Customer customer2 = Customer("Bas");

    // verwijder een object uit een vector
    std::vector<Customer> customers = {customer1, customer2};
    for (Customer c : customers) {
        std::cout << c << std::endl;
    }

    //Om customer1 te verwijderen kun je de volgende one-liner gebruiken, maar dit lijkt niet bij iedereen te werken
    //customers.erase(remove(customers.begin(), customers.end(), customer1), customers.end());

    //Alternatief om customer1 uit de vector te verwijderen 
    for(int i = 0; i < customers.size(); i++){
        if(customers[i]== customer1){
            customers.erase(customers.begin()+i);
        }
    }
    std::cout << "Na verwijderen van customer 1 " << std::endl;

    for (Customer c : customers) {
        std::cout << c << std::endl;
    }
    // std::cout << customer1;
    // CarRental rental1 = CarRental(car1, customer1, 10);
    // std::cout << rental1;

    return 0;
}