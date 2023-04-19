#pragma once



#include <iostream>
#include <string>


namespace namespace_voorbeeld {

    namespace rianne{
        std::string cout = "hallooo!";
    }

    void my_main(){
        std::cout << rianne::cout << std::endl;
    }

}