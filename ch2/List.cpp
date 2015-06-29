#include "List.h"
#include <iostream>

template <class T>
List<T>::List() {
    headNode = NULL;
}

template<class T>
void List<T>::insertNode(T data) {
    T* listPtr = headNode;

    if (isEmpty()) {  // empty list
        headNode = new Node<T>(data);
    }

    else {
        while (listPtr->nextNode != NULL) {
            listPtr = listPtr->nextNode;
        }
        listPtr->nextNode = new Node<T>(data);
    }
}

template<class T>
void List<T>::deleteNode() {
    T* listPtrNext = headNode;
    T* listPtrThis = headNode;

    if (isEmpty()) {
        std::cout << "Cannot delete.  List is empty" << std::endl;
    }

    else if (listPtrNext->next == NULL) {
        delete listPtrNext;
        headNode = NULL;
    }

    else {
        while (listPtrNext->next != NULL) {
            listPtrThis = listPtrNext;
            listPtrNext = listPtrNext->nextNode;
        }
        delete listPtrNext;
        listPtrThis->nextNode = NULL;
    }
}

template<class T>
bool List<T>::isEmpty() {
    if (headNode == NULL)
        return true;
    else
        return false;
}
