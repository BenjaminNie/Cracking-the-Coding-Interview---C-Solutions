#include "Node.h"
#include "BTree.h"
#include <iostream>

using std::cout;
using std::endl;

/*
      25
      /\
     /   \
    13     75
    /\      / \
   /  \    /   \
  5   17   63   100
 / \
3  7

*/

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
    b1.printTree();
    bool isBalanced = b1.isBalanced();

    if (isBalanced) {
        cout << "The tree is balanced" << endl;
    } else {
        cout << "The tree is not balanced" << endl;
    }

    return 0;
}
