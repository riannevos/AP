// #include "grunt.cpp"
#include <iostream>

class Grunt {
    // attributen (eigenschappen)
private: // kan ook: private
    int x, y, health;

public:
    Grunt(){
        x= 0;
        y=0;
        health = 100;
    }

    // Constructors en this
    Grunt(int x, int y, int health) {
        this->x = x;
        this->y = y;
        if(health > 100){
            this->health = 100;
        } else{
            this->health = health;
        }
    }

    // member functies
    void move(int xoffset, int yoffset) {
        x += xoffset;
        y += yoffset;

        //check of x en y binnen speelveld vallen 
        // aanpassen visualisatie
    }

    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }
    int getHealth(){
        return this->health;
    }


};

int main() {

     // Maak een object g van type Grunt (g is een instantiatie van klass Grunt)
    Grunt g1 = Grunt(0,0,100);
    Grunt g2 = Grunt(10,50,80);
    Grunt g3 = Grunt();

    g1.x = 100; //werkt alleen als x public is

    // Move grunt g met (50,30)
    g1.move(50,30);
    std::cout<< "grunt g1 staat op positie: (" << g1.getX() << "," << g1.getY() <<")" <<std::endl;

    g1.move(40,20);
    std::cout<< "grunt g1 staat op positie: (" << g1.getX() << "," << g1.getY() <<")" <<std::endl;
   

    

    return 0;
}