#include "Node.h"
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
    list1.addNodeEnd(122);
    list1.addNodeEnd(7);
    list1.addNodeEnd(1);
    list1.addNodeEnd(122);
    list1.addNodeEnd(1);
    list1.addNodeEnd(9);
    list1.addNodeEnd(122);
    list1.addNodeEnd(11);
    list1.addNodeEnd(131);
    list1.addNodeEnd(5);

    list1.printList();

    list1.removeDuplicates();

    list1.printList();
    // SHOULD NO LONGER BE ABLE TO DELETE
    return 0;
}
