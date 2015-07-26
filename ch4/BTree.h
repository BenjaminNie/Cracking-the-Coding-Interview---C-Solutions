#ifndef BTREE_H
#define BTREE_H

#include "Node.h"

class BTree {
    public:
        BTree();
        void insertIntoTree(Node*& node, int value);
        void insert(int value);
        bool isEmpty();
        void printNode(Node* node);
        void printTree();
        bool isBalanced();
        int findShallowestBranch(Node* node);
        int findDeepestBranch(Node* node);
        ~BTree();

        Node* root;
};

#endif
