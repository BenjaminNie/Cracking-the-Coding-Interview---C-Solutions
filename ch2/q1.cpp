#include "Node.h"
#include "List.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void) {
    List list1;

    list1.addNodeEnd(5);
    list1.addNodeEnd(6);

    list1.printList();

    list1.deleteNodeEnd();

    list1.printList();

    list1.deleteNodeEnd();

    // SHOULD NO LONGER BE ABLE TO DELETE
    cout << "test";

    list1.printList();

    list1.deleteNodeEnd();

    return 0;
}
