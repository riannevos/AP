
#include <iostream>
#include <string>

std::string zeg_hallo(std::string naam){
    std::string groet = "Hallo " + naam;
    return groet;
}


int main(){
    std::string mijn_groet = zeg_hallo("Peter");
    //std::string groet = "Hello world";
    std::cout << mijn_groet << std::endl;
    return 0;
}