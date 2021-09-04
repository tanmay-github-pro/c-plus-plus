#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node() { next = nullptr; }
};

class queue
{
private:
    int size;
    node *f, *r;

public:
    queue();
    void enqueue(int x);
    int deque();
    void display();
};

queue::queue()
{
    f = r = nullptr;
}

void queue::enqueue(int x)
{
    node *t = new node;
    // if t == NULL, queue is full
    if(!t)
        cout << "Queue is Full!\n";
    else
    {
        t->data = x;

        // if f == NULL, queue is empty
        if (!f)
            f = r = t;
        else
        {
            r->next = t;
            r = t;
        }
    }
}

int queue::deque()
{
    int x = -1;
    if(f)
    {
        x = f->data;

        node *temp = f;
        f = f->next;

        // if front becomes null make rear also null
        // this means that queue is empty
        if(!f)
            r = nullptr;
        
        delete temp;
    }
    return x;
}

void queue::display()
{
    // if queue is not empty
    if(f)
    {
        cout<<"Elements is the queue are:\n";
        node *temp = f;
        while (temp)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
        cout << "\n";
    }
    else
        cout << "Queue is Empty\n";
}