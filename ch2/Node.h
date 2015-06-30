#ifndef NODE_H
#define NODE_H

class Node {
    public:
        Node();
        Node(int data);
        int getData();
        ~Node();

        Node* next;
    private:
        int m_data;
};

#endif
