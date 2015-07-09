#include <stack>
#include <iostream>

using std::stack;
using std::cout;
using std::endl;

template <class T>
stack<T>* sortStack(stack<T>* inStack);

int main (void) {
    stack<int>* stack1 = new stack<int>;
    stack1->push(32);
    stack1->push(232);
    stack1->push(32);
    stack1->push(0);
    stack1->push(234234);
    stack1->push(0);
    stack1->push(5555);
    stack1 = sortStack(stack1);

    for (int i = 0; i < 7; i++) {
        cout << "The stack's sorted sequence is " << stack1->top() << endl;
        stack1->pop();
    }
}

template <class T>
stack<T>* sortStack(stack<T>* inStack) {
    stack<T> tempStack;
    stack<T>* sortedStack = new stack<T>;

    if (inStack->empty()) {
        cout << "stack is empty" << endl;
        return inStack;
    }

    else {
        // move first element of input stack into sorted stack
        sortedStack->push(inStack->top());
        inStack->pop();

        // begin sorting algorithm
        while (!inStack->empty()) {
            if (inStack->top() <= sortedStack->top()) {
                sortedStack->push(inStack->top());
            }

            else {
                while ((!sortedStack->empty()) && (inStack->top() > sortedStack->top())) {
                    tempStack.push(sortedStack->top());
                    sortedStack->pop();
                }
                sortedStack->push(inStack->top());
                while (!tempStack.empty()) {
                    sortedStack->push(tempStack.top());
                    tempStack.pop();
                }
            }
            inStack->pop();
        }
        delete (inStack);
        return sortedStack;
    }
}
