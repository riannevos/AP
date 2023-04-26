#include <iostream>
#include <ctime>

#include "include/car.hpp"
#include "include/customer.hpp"
#include "include/carrental.hpp"

//function overloading

int add(int a, int b){
    return a + b;
}

double add(int a, double b){
    return a + b;
}

double add(double a, double b){
    return a + b;
}

std::ostream& operator<<(std::ostream& out, CarRental my_carrental){
    out << my_carrental.toString();
    return out;
}


int main(){
     
    double x = 3.5;
    int y = 2;

    add(y,x);

    

  
    Car car1 = Car("Peugeot", 100);
    Customer customer1 = Customer("Rianne");
    std::cout << customer1;
    //CarRental rental1 = CarRental(car1, customer1, 10);
    //std::cout << rental1;
    
    return 0;
}