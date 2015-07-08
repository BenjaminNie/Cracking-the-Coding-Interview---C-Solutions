#include "StackOfStacks.h"

#include <iostream>
#include <vector>
#define DEFAULT 10

using std::cout;
using std::endl;

template <class T>
StackOfStacks<T>::StackOfStacks() {
    stack1.reserve(DEFAULT);
    stack2.reserve(DEFAULT);
    stack3.reserve(DEFAULT);
}

template <class T>
StackOfStacks<T>::StackOfStacks(int size) {
    stack1.reserve(size);
    stack2.reserve(size);
    stack3.reserve(size);
}

template <class T>
void StackOfStacks<T>::push(T object) {
    if (stack1.size() < stack1.capacity()) {
        stack1.push_back(object);
        return;
    }

    else if (stack2.size() < stack2.capacity()) {
        stack2.push_back(object);
        return;
    }

    else if (stack3.size() < stack3.capacity()) {
        stack3.push_back(object);
        return;
    }

    else {
        cout << " all three stacks are full " << endl;
        return;
    }
}

template <class T>
T StackOfStacks<T>::pop() {
    T temp;

    if (stack1.empty() && stack2.empty() && stack3.empty()) {
        cout << "all three stacks are empty " << endl;
    }

    else if (!stack3.empty()) {
        temp = stack3.back();
        stack3.pop_back();
        return temp;
    }

    else if (!stack2.empty()) {
        temp = stack2.back();
        stack2.pop_back();
        return temp;
    }

    else if (!stack1.empty()) {
        temp = stack1.back();
        stack1.pop_back();
        return temp;
    }
}

template <class T>
T StackOfStacks<T>::peek() {
    if (stack1.empty() && stack2.empty() && stack3.empty()) {
        cout << "all three stacks are empty " << endl;
    }

    else if (!stack3.empty()) {
        return stack3.back();
    }

    else if (!stack2.empty()) {
        return stack2.back();
    }

    else if (!stack1.empty()) {
        return stack1.back();
    }
}

template <class T>
StackOfStacks<T>::~StackOfStacks() {
    // destructor
}
