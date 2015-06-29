#include "Node.h"
#include <iostream>

template<class T>
Node<T>::Node(T data) {
    m_data = data;
    nextNode = NULL;
}

template<class T>
void Node<T>::printNode() {
    std::cout << m_data;
}

template<class T>
void Node<T>::getData() {
    return m_data;
}
