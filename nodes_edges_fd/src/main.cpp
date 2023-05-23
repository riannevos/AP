#include <iostream>
#include "include/node.hpp"

int main(){
    Node s0;
    Node s1;
    Node s2;
    Node s3;


    Edge e1;
    Edge e2;
    Edge e3;

    e1.start = &s0;
    e2.start = &s1;

    s0.A = &e1;
    s0.B = &e2;
}