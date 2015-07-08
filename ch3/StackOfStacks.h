#ifndef STACKOFSTACKS_H
#define STACKOFSTACKS_H

#include <vector>

using std::vector;

template <class T>
class StackOfStacks {
    public:
        StackOfStacks();
        StackOfStacks(int size);
        void push(T object);
        T pop();
        T peek();
        ~StackOfStacks();

    private:
        vector<T> stack1;
        vector<T> stack2;
        vector<T> stack3;
};

#endif
