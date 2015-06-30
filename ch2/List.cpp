#include "List.h"
#include "Node.h"
#include <iostream>

using std::cout;
using std::endl;

List::List() {
    headNode = NULL;
}

List::~List() {
    // traverse through list and delete all items
}

Node* List::addNode(int data) {
    Node* nodePtr = new Node(data);
    return nodePtr;
}

void List::deleteNodeEnd() {
    Node* fwdPtr = headNode;
    Node* bckPtr = headNode;

    if (isEmpty()) {
        return;
    }


    if (fwdPtr->next == NULL) { // one item left in LL
        delete fwdPtr;
        headNode = NULL;
        return;
    }

    while (fwdPtr->next != NULL) {
        bckPtr = fwdPtr;
        fwdPtr = fwdPtr->next;
    }

    bckPtr->next = NULL;
    delete fwdPtr;
}

bool List::isEmpty() {
    if (headNode == NULL) {
        cout << "List is empty" << endl;
        return true;
    }
    else
        return false;
}

void List::addNodeEnd(int data) {
    Node* nodePtr = headNode;

    if (isEmpty()) {
        headNode = addNode(data);
        return;
    }

    while (nodePtr->next != NULL) {
        nodePtr = nodePtr ->next;
    }

    nodePtr->next = addNode(data);
}

void List::printList() {
    Node* nodePtr = headNode;

    if (isEmpty()) {
        return;
    }

    while (nodePtr != NULL) {
        cout << nodePtr->getData() << " -> ";
        nodePtr = nodePtr->next;
    }
    cout << "NULL" << endl;
}
