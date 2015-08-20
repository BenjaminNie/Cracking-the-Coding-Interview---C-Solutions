#ifndef BTREE_H
#define BTREE_H

#include "Node.h"
#include <vector>

using std::vector;

class BTree {
    public:
        BTree();
        BTree(vector<int> array);
        void insertIntoTree(Node*& node, int value);
        void transformToTree(Node*& node, vector<int> array, int high, int low);
        bool breadthFirstSearch(vector<Node*> depth, int searchValue);
        bool searchForValue(int searchValue);
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
