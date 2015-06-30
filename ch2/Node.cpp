#include "Node.h"
#include <iostream>

using std::cout;
using std::endl;

Node::Node() {
    m_data = 0;
    next = NULL;
}

Node::Node(int data) {
    m_data = data;
    next = NULL;
}

int Node::getData() {
    return m_data;
}

Node::~Node() {
    // node destructor
}
    
