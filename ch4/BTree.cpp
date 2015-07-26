#include "BTree.h"
#include <iostream>

using std::cout;
using std::endl;

BTree::BTree() {
    root = NULL;
}

bool BTree::isEmpty() {
    if (root == NULL)
        return true;
    else
        return false;
}

void BTree::insertIntoTree(Node*& node, int value) {
    if (node == NULL) {
        node = new Node(value);
    } else {
        if (value <= node->myValue) {
            insertIntoTree(node->leftChild, value);
        } else {
            insertIntoTree(node->rightChild, value);
        }
    }
    return;
}

void BTree::insert(int value) {
    insertIntoTree(root, value);
    return;
}

void BTree::printTree() {
    printNode(root);
    return;
}

void BTree::printNode(Node* node) {
    if (node == NULL) {
        return;
    } else {
        cout << "parent node: " << node->myValue << endl;
        if (node->leftChild != NULL) {
            cout << "leftChild: " << node->leftChild->myValue << endl;
        }
        if (node->leftChild == NULL) {
            cout << "leftChild: NULL" << endl;
        }
        if (node->rightChild != NULL) {
            cout << "rightChild: " << node->rightChild->myValue << endl;
        }
        if (node->rightChild == NULL) {
            cout << "rightChild: NULL" << endl;
        }
        cout << endl << endl << endl;
        printNode(node->leftChild);
        printNode(node->rightChild);
        return;
    }
}

bool BTree::isBalanced() {
    if (isEmpty()) {
        cout << "Tree is empty" << endl;
        return false;
    }

    int deepest = findDeepestBranch(root);
    int shallowest = findShallowestBranch(root);

    cout << "deepest is " << deepest << endl;
    cout << "shallowest is " << shallowest << endl;

    if (deepest - shallowest <= 1 ) {
        return true;
    } else {
        return false;
    }
}

int BTree::findDeepestBranch(Node* node) {
    if (node == NULL) {
        return 0;
    } else {
        int leftDepth = findDeepestBranch(node->leftChild);
        int rightDepth = findDeepestBranch(node->rightChild);

        if (leftDepth > rightDepth)
            return 1 + leftDepth;
        else 
            return 1 + rightDepth;
    }
}

int BTree::findShallowestBranch(Node* node) {
    if (node == NULL) {
        return 0;
    } else {
        int leftDepth = findShallowestBranch(node->leftChild);
        int rightDepth = findShallowestBranch(node->rightChild);

        if (leftDepth < rightDepth)
            return 1 + leftDepth;
        else 
            return 1 + rightDepth;
    }
}

BTree::~BTree() {
    // do nothing
}
