#pragma once
#include <string>
#include <iostream>
#include <vector>

class Edge; //forward declaration (we beloven dat we egde implementeren)

class Node
{
public:
    std::string label;
    std::vector<Edge*> edges;

    Node(std::string label);
    
    friend std::ostream &operator<<(std::ostream &os, Node& node);
};

