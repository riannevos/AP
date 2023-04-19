#pragma once
#include <iostream>
#include <vector>

namespace vector_voorbeeld{


    void my_main(){

        std::vector<int> my_vector {1,3,5,7,9};

        //python: for i in range(0,len(my_vector)):
        for(unsigned int i = 0; i < my_vector.size(); i++){
            std::cout << my_vector[i] <<std::endl;
        }

   

    }

}
