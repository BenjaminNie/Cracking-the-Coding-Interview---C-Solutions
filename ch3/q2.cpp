#include "Stack.cpp"
#include <iostream>

using std::cout;
using std::endl;

int main (void) {
    Stack<int> stack1;
    stack1.push(10);
    stack1.push(123);
    stack1.push(2);
    stack1.push(10);
    stack1.push(123);
    stack1.push(4);
    stack1.push(10);
    stack1.push(21);
    stack1.push(234);
    stack1.push(123);
    stack1.push(20342);
    stack1.push(122);
    stack1.push(23423);
    stack1.push(123);
    stack1.push(2);

    cout << "The minimum is " << stack1.min() << endl;

    return 0;
}
