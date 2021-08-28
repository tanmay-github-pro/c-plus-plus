// Queue(Linear) header file for tree creation using C++
// When initialisation of front and rear of queue is "f = 0 and r = -1"
// Condition for Queue to be empty: "f>r" | Condition for Queue to be full: "r == size - 1"
// #pragma once

#include "node.h"

class Queue
{
private:
    int f, r; // defining front and rear of Queue
    int size;
    node **q;

public:
    Queue();
    Queue(int size);
    void enque(node *x);
    node *deque();
    void display();
    bool isEmpty();
    bool isFull();
};
Queue::Queue()
{
    f = 0;
    r = -1;
    size = 10;
    q = new node *[size];
}
Queue::Queue(int size)
{
    f = 0;
    r = -1;
    this->size = size;
    q = new node *[size];
}
void Queue::enque(node *x)
{
    if (!isFull()) // checking the boolean, proceed only if queue full check is false
        q[++r] = x;
}
node *Queue::deque()
{
    if (!isEmpty())    // checking the boolean, proceed only if queue empty check is false
        return q[f++]; // f++ used bcz current value of f needs to be returned before it is incremented
    else
        return NULL;
}
bool Queue::isEmpty()
{
    if (f > r) // condition for Queue to be empty
        return true;
    else
        return false;
}
bool Queue::isFull()
{
    if (r == size - 1) // condition for Queue to be full
        return true;
    else
        return false;
}
/* void Queue::display()
{
    if (!isEmpty())
        for (int i = f; i <= r; i++)
            cout << q[i] << "\t";
    cout << endl;
} */