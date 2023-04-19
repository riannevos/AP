#pragma once

#include <fstream>
#include <string>
#include <iostream>



namespace fstream_voorbeeld{

    void my_main(){
        std::ifstream readfile("read.txt");
        std::ofstream writefile("write.txt");


        std::string line;
        getline(readfile, line);

        std::cout << "Gelezen: " << line << "\n";
        writefile << line;
    }

}