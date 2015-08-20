#include "Node.h"
#include "BTree.h"
#include <iostream>

using std::cout;
using std::endl;

int main (void) {
    BTree b1;

    b1.insert(25);
    b1.insert(13);
    b1.insert(17);
    b1.insert(75);
    b1.insert(5);
    b1.insert(3);
    b1.insert(7);
    b1.insert(100);
    b1.insert(63);

    if (b1.searchForValue(62)) {
        cout << "success" << endl;
    }

    return 0;
}
