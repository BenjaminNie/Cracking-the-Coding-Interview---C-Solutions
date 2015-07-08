#include "StackOfStacks.cpp"

#include <iostream>

using std::cout;
using std::endl;

int main (void) {
    StackOfStacks<int> sos(3);


    for (int i = 0; i < 10; i++) {
        sos.push(3);
    }
    // program should complain here about fullness

    for (int i = 0; i < 10; i++) {
        sos.pop();
    }
    // program should complain here about emptiness

    return 0;
}
