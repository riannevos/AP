#include "include/node.hpp"

Node::Node() : A(Edge()), B(Edge()){}

Node::Node(std::string label, Edge A, Edge B) : label(label), A(A), B(B) {}

std::ostream &operator<<(std::ostream &os, const Node &node) {

    os << "Node " << node.label << " A goes to " << node.getLabelA() << " B goes to " << node.getLabelB() << "\n";
    return os;
}