#pragma once
#include <iostream>

namespace references {


    void print_params(int x, int y, int z) {
        std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
    }

    void addOne(int a){ //als je addOne(x) aanroept, wordt er een copy van x gemaakt, x zelf blijft onverandert
        a++;
    }

    void addOneRef(int& a){ //geef verwijzing door, object zelf kan wel aangepast worden
      a++;
    }

    //pass by const reference. 
    //a kan zelf niet aangepast worden. Dit is sneller omdat er geen kopie gemaakt hoeft te worden.
    //Het kopieren van een int is snel, dus dan hoeft dit eigenlijk niet. Wel zinvol bij grotere objecten.
    int addOneRef(const int& a){ 
        return a + 1;
    }

    void my_main() {
        
        int x = 5;
        int& y = x; //reference naar x
        int z = x; //copy van x

        int a = 66;

        x++; // x en y zijn beide 6
        y++; // x en y zijn beide 7

        y = a; // x en y zijn beide 66

        addOne(x); //x zelf blijft onverandert

        addOneRef(x); //x verandert wel (en y dus ook)

        print_params(x,y,z);
    }

}