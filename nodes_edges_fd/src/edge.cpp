#include "include/egde.hpp"

Edge::Edge():start(nullptr), end(nullptr){};
Edge::Edge(Node* start, Node* end): start(start), end(end){};