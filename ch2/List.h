#ifndef LIST_H
#define LIST_H
#include "Node.h"

template<class T>
class List {
    public:
        List();
        void insertNode(T data);
        void deleteNode(); //Deletes last node in the list
        bool isEmpty();

    private:
        Node<T> headNode;
};
#endif
