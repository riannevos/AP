#pragma once
#include <iostream>


namespace cin_voorbeeld{


    void my_main(){

        std::string user_input;

        std::getline(std::cin, user_input);

        std::cout << user_input << std::endl;
        

    }

}
