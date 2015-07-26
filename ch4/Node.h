#ifndef NODE_H
#define NODE_H

#include<iostream>  // to use NULL  

class Node {
    public:
        Node();
        Node(int value);
        void attachLeft(int value);
        void attachRight(int value);
        ~Node();

    // public for sake of interview speed, would definetely be private w/ accomodating getter/setter fxns otherwise
        int myValue;
        Node* leftChild;
        Node* rightChild;
};

#endif
