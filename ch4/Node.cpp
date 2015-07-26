#include "Node.h"

Node::Node() {
    myValue = 0;
    leftChild = NULL;
    rightChild = NULL;
}

Node::Node(int value) {
    myValue = value;
    leftChild = NULL;
    rightChild = NULL;
}

void Node::attachLeft(int value) {
    leftChild = new Node(value);
}

void Node::attachRight(int value) {
    rightChild = new Node(value);
}

Node::~Node() {
    // do nothing
}
