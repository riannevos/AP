#include <iostream>
#include "include/node.hpp"
#include "include/edge.hpp"
#include "include/graph.hpp"

int main(){

    Node a = Node("a"); Node b = Node("b"); Node c = Node("c"); Node d = Node("d"); Node e = Node("e"); Node f = Node("f");

    //Heb je een adres, dan haal je met * het object op
    //Heb je een object, dan haal je met & het adres op
    Edge a1 = Edge(&a, &b, 4); Edge a2 = Edge(&a, &c, 3);    
    Edge b1 = Edge(&b, &c, 5); Edge b2 = Edge(&b, &d, 2);
    Edge c1 = Edge(&c, &d, 3); Edge c2 = Edge(&c, &e, 1);    
    Edge d1 = Edge(&d, &f, 1); 
    Edge e1 = Edge(&e, &d, 1); Edge e2 = Edge(&e, &f, 3);   

    a.edges.push_back(&a1);
    a.edges.push_back(&a2);
    
    b.edges.push_back(&b1);
    b.edges.push_back(&b2);
    c.edges.push_back(&c1);
    c.edges.push_back(&c2);
    d.edges.push_back(&d1);
    e.edges.push_back(&e1);
    e.edges.push_back(&e1);

    Graph g = Graph(
        {&a, &b, &c, &d, &e, &f},
        {&a1, &a2, &b1, &b2, &c1, &c2, &d1, &e1, &e2}
    );

    Edge* edgebetweennodes= g.getEdgeBetweenNodes(&a, &b);
    if(edgebetweennodes!=nullptr){
        std::cout << edgebetweennodes;
    }else{
        std::cout << "Er bestaat geen edge tussen deze nodes";
    }



    std::vector<Node*> nodesInPath = {&a, &b, &c, &d, &f};

    std::cout << "Cost of path " << g.getCostOfPath(nodesInPath) << "\n";

}