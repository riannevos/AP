/*
#include <iostream>

#include <vector>

class Grunt{

}

namespace grunt {
    std::vector<int> x_position;
    std::vector<int> y_position;
    std::vector<int> health_values;

    void create_grunt(int x, int y, int health) {
        x_position.push_back(x);
        y_position.push_back(y);
        health_values.push_back(health);
    }

    void move_grunt(int index, int xoffset, int yoffset) {
        x_position[index] += xoffset;
        y_position[index] += yoffset;
    }
}

int main() {
    grunt::create_grunt(20,50,100);
    grunt::create_grunt(0,0,80);



    return 0;
}
*/