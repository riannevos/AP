#pragma once
#include <string>
#include <iostream>
#include "egde.hpp"

class Node
{
public:
    std::string label;
    Edge* A;
    Edge* B;

    Node();
    Node(std::string label, Edge* A, Edge* B);
};

