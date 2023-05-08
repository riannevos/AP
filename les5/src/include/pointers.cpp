#pragma once
#include <ctime>
#include <iostream>

namespace pointers {

    void my_main() {

        int x = 5;

        // met &x kunnen we het adres van x opvragen (let op, de & in een declaratie maakt een reference, de & voor een variabele geeft het adres)
      
        std::cout << "het adres van x: " << &x << "\n"; // vraag adres van x op

        //We kunnen het adres ook toewijzen aan een variabele, die variabele noemen we een pointer naar een int en definieren we met int*
        int* y = &x;

        //Die pointer kunnen we gebruiken om het adres van x te printen:
        std::cout << "het adres van x: " << y << "\n"; 

        // We kunnen ook het object weer uit de pointer halen. Ook dit gebeurt met een * (maar nu dus voor de variabel naam, in plaats van in een declaratie)
        int z = *y; //z krijgt nu dezelfde waarde als x.

        // Een pointer is mutable:
        int a = 66;
        y = &a; // Nu bevat y het adres van a.
        std::cout << "het adres van a: " << y << "\n"; //print het adres van a
        std::cout << "het adres van a: " << *y << "\n"; //print de waarde van a

        /* In summatieve opdracht zagen we:
        time_t curr_time = time(NULL);
        tm *tm_local = localtime(&curr_time);
        int releaseDate1 = tm_local->tm_year + 1899; // tm_local->tm_year is een andere notatie voor (*tm_local).tm_year
        */
    }

}
