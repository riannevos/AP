#pragma once
#include "node.hpp"
#include "edge.hpp"

class Graph{
    private:
    std::vector<Node*> nodes;
    std::vector<Edge*> edges;

    public:
    Graph(std::vector<Node*> nodes, std::vector<Edge*> edges);
    Edge* getEdgeBetweenNodes(Node* from, Node* to);
    int getCostOfPath(std::vector<Node*> nodesToVisit);
};