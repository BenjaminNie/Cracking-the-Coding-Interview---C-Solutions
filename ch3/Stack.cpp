#include "Stack.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

template <class T>
Stack<T>::Stack() {
    // constructor
}

template <class T>
Stack<T>::Stack(int size) {
    data.reserve(size);
}

template <class T>
void Stack<T>::push(T object) {
    data.push_back(object);
}

template <class T>
T Stack<T>::pop() {
    if (data.empty()) {
        cout << "stack is empty" << endl;
    }

    T item = data.back();
    data.pop_back();
    return item;
}

template <class T>
T Stack<T>::peek() {
    if (!data.empty())
        return data.back();
}

template <class T>
T Stack<T>::min() {
    if (data.empty()) {
        cout << "stack is empty" << endl;
    }

    typename vector<T>::iterator it;
    T min = data[0]; // SYSTEM DEPENDENT

    for (it=data.begin(); it!=data.end(); it++) {
        if (*it < min)
            min = *it;
    }

    return min;
}

template <class T>
Stack<T>::~Stack() {
    // destructor
}
