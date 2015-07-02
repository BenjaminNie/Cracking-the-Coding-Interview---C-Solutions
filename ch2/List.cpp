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

void List::deleteNode(Node* nodePtr) {
    delete nodePtr;
}

void List::deleteNodeEnd() {
    Node* fwdPtr = headNode;
    Node* bckPtr = headNode;

    if (isEmpty()) {
        return;
    }


    if (fwdPtr->next == NULL) { // one item left in LL
        deleteNode(fwdPtr);
        headNode = NULL;
        return;
    }

    while (fwdPtr->next != NULL) {
        bckPtr = fwdPtr;
        fwdPtr = fwdPtr->next;
    }

    bckPtr->next = NULL;
    deleteNode(fwdPtr);
}

bool List::isEmpty() {
    if (headNode == NULL) {
        cout << "List is empty" << endl;
        return true;
    }
    else
        return false;
}

Node* List::getHeadNode() {
    if (isEmpty()) {
        return NULL;
    }

    return headNode;
}

int List::size() {
    Node* nodePtr = headNode;
    int size = 0;

    if (isEmpty()) {
        return 0;
    }

    while (nodePtr != NULL) {
        nodePtr = nodePtr->next;
        size++;
    }

    return size;
}

void List::removeDuplicates() {
    Node* itPtr = headNode;
    Node* bckPtr = headNode;
    Node* fwdPtr = headNode->next;
    int duplicate;

    if (isEmpty()) {
        return;
    }

    while (itPtr->next != NULL) {
        duplicate = itPtr->getData();

        while (fwdPtr != NULL) {
            if (fwdPtr->getData() == duplicate) {
                bckPtr->next = fwdPtr->next;
                deleteNode(fwdPtr);
                fwdPtr = bckPtr->next;
            }
           else {
               bckPtr = fwdPtr;
               fwdPtr = fwdPtr->next;
           }
        }

        itPtr = itPtr->next;
        bckPtr = itPtr;
        fwdPtr = itPtr->next;
    }
}

int List::findFromEnd(int numFromEnd) {
    int numNodes = 0;
    Node* nodePtr = headNode;

    if (isEmpty()) {
        return 0;
    }

    while (nodePtr != NULL) {
        nodePtr = nodePtr->next;
        numNodes++;
    }

    if (numFromEnd > (numNodes - 1)) {
        cout << "There are only " << numNodes << " nodes inside the list.  Cannot find " << numFromEnd << " nodes from the end" << endl;
        return 0;
    }

    nodePtr = headNode;

    for (int i = 0; i < numNodes - numFromEnd - 1; i++) {
        nodePtr = nodePtr->next;
    }

    return nodePtr->getData();
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
