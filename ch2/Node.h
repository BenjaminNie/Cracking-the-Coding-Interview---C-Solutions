#ifndef NODE_H
#define NODE_H

template <class T>
class Node {
    public:
        Node() {};
        Node(T data);
        void printNode();
        void getData();
        virtual ~Node();
    private:
        T m_data;
        T* nextNode;
};

#endif
