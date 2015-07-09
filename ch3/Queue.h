#include <stack>

using std::stack;

template <class T>
class Queue {
    public:
        Queue();
        void push(T object);
        T pop();

    private:
        stack<T> stackReal;
        stack<T> stackTemp;
};
