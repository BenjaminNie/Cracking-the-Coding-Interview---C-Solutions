#include "Node.h"
#include "BTree.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main (void) {
    vector<int> array { 1, 2, 3, 4, 5, 6, 7, 8 };
    cout << array.size() << endl;

    BTree btree(array);

    btree.printTree();

    return 0;
}
