#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List {
    public:
        List();
        Node* addNode(int data);
        void addNodeEnd(int data);
        void deleteNode(Node* nodePtr);
        void deleteNodeEnd();
        Node* getHeadNode();
        int findFromEnd(int numFromEnd);
        bool isEmpty();
        void printList();
        void removeDuplicates();
        int size();
        ~List();
    private:
        Node* headNode;
};

#endif
