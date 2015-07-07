#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

using std::vector;

template <class T>
class Stack {
    public:
        Stack();
        Stack(int size);
        void push(T object);
        T pop();
        T peek();
        T min();
        ~Stack();

    private:
        vector<T> data;
};

#endif
