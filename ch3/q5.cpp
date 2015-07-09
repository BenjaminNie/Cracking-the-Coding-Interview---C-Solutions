#include "Queue.cpp"
#include <iostream>
#include <stack>

using std::stack;
using std::cout;
using std::endl;

int main (void) {
    Queue<int> queue1;

    queue1.push(20);
    cout << "queue1 contains " << queue1.pop() << endl;

    queue1.push(30);
    queue1.push(32);
    queue1.push(20);
    queue1.push(10);
    queue1.push(64);
    queue1.push(53);
    cout << "queue1 first item is " << queue1.pop() << endl;
    cout << "queue1 second item is " << queue1.pop() << endl;

    return 0;
}
