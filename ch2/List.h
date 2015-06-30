#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List {
    public:
        List();
        Node* addNode(int data);
        void addNodeEnd(int data);
        void deleteNodeEnd();
        bool isEmpty();
        void printList();
        ~List();
    private:
        Node* headNode;
};

#endif
