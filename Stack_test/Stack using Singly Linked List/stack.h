// Implementation of Stack using Linked list
// New elements are added at the beginning of list
// becuase insertion time is O(1) as compared to O(n) on insertion at the end

#include <iostream>
using namespace std;
// node to hold values of stack in Singly Linked List Representation
class node
{
public:
    int data;
    node *next;
};

class stack
{
private:
    int size;
    node *top;

public:
    stack();
    bool isFull(node *t);
    bool isEmpty();
    void push(int x);
    void pop();
    int peekTop();
    void display();
};

stack::stack()
{
    top = NULL;
}

bool stack::isFull(node *t)
{
    // Stack is full when heap is full
    // so new node won't be created and will point to null
    // i.e. t == null
    if (t == NULL)
        return true;
    return false;
}

bool stack::isEmpty()
{
    // if no element is present then top will be pointing to NULL
    if (top == NULL)
        return true;
    return false;
}
void stack::push(int x)
{
    node *t = new node;
    if (isFull(t))
        cout << "Stack Overflow\n";
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

void stack::pop()
{
    if (!isEmpty())
    {
        top = top->next;
        delete top;
    }
    else
        cout << "Stack Underflow!\n";
}

int stack::peekTop()
{
    if(!isEmpty())
        return top->data;
    return -1;
}

void stack::display()
{
    node *temp = top;
    if(isEmpty())
        cout << "Stack is empty!\n";
    else
    {
        cout << "\nElements in Stack:\n";
        while (temp != NULL)
        {
            cout << temp->data << "\n";
            temp = temp->next;
        }
    }
    cout << "\n";
}