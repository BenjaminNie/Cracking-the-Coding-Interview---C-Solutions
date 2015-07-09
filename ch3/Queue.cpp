#include "Queue.h"
#include <iostream>

using std::cout;
using std::endl;

template <class T>
Queue<T>::Queue() {
    // do nothing
}

template <class T>
void Queue<T>::push(T object) {
    while (!stackReal.empty()) {
        stackTemp.push(stackReal.top());
        stackReal.pop();
    }

    stackReal.push(object);

    while (!stackTemp.empty()) {
        stackReal.push(stackTemp.top());
        stackTemp.pop();
    }

    return;
}

template <class T>
T Queue<T>::pop() {
    if (stackReal.empty())
        cout << "queue is empty" << endl;

    T temp = stackReal.top();
    stackReal.pop();

    return temp;
}
