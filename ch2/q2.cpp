#include "Node.h"
#include "List.h"

#include <iostream>

using std::cout;
using std::endl;

int main (void) {
    List list1;

    list1.addNodeEnd(3);
    list1.addNodeEnd(60);
    list1.addNodeEnd(9);
    list1.addNodeEnd(1);
    list1.addNodeEnd(323);
    list1.addNodeEnd(602);
    list1.addNodeEnd(3142);
    list1.addNodeEnd(602);
    list1.addNodeEnd(31234);
    list1.addNodeEnd(60243);
    list1.addNodeEnd(3444);
    list1.addNodeEnd(60322);

    list1.printList();

    cout << "0th from end is " << list1.findFromEnd(0) << endl;
    cout << "11th from end is " << list1.findFromEnd(11) << endl;
    cout << list1.findFromEnd(12) << endl;
    cout << "6th from end is " << list1.findFromEnd(6) << endl;

    return 0;
}
