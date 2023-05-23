#pragma once

class Node; //Je kunt hier geen node includen, forward declaration is nodig

class Edge{
    public:
    Node* start;
    Node* end;

    Edge();
    Edge(Node* start, Node* end);
};