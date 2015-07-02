#include "List.h"
#include "Node.h"

#include <iostream>

using std::cout;
using std::endl;

int addList(List list1, List list2);

int main (void) {
    List list1;
    List list2;
    List list3;
    List list4;

    // 295
    list1.addNodeEnd(5);
    list1.addNodeEnd(9);
    list1.addNodeEnd(2);

    // 219
    list2.addNodeEnd(9);
    list2.addNodeEnd(1);
    list2.addNodeEnd(2);

    cout << "list1 + list2 = " << addList(list1, list2) << endl;

    // 812
    list3.addNodeEnd(2);
    list3.addNodeEnd(1);
    list3.addNodeEnd(8);

    // 188
    list4.addNodeEnd(8);
    list4.addNodeEnd(8);
    list4.addNodeEnd(1);

    cout << "list3 + list4 = " << addList(list3, list4) << endl;

}

int addList(List list1, List list2) {
    if (list1.size() != list2.size()) {
        cout << "The two lists are not the same size, cannot add";
        return 0;
    }

    if (list1.isEmpty()) {
        return 0;
    }

    Node* nodePtr1 = list1.getHeadNode();
    Node* nodePtr2 = list2.getHeadNode();
    int multiplier = 1;
    int result = 0;
    int digit1;
    int digit2;

    while (nodePtr1 != NULL) {
        digit1 = nodePtr1->getData() * multiplier;
        digit2 = nodePtr2->getData() * multiplier;
        result = digit1 + digit2 + result;
        nodePtr1 = nodePtr1->next;
        nodePtr2 = nodePtr2->next;
        multiplier *= 10;
    }

    return result;
}

