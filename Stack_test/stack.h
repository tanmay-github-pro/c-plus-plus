#include <iostream>
using namespace std;

class stack
{
private:
    int size;
    int top;
    // array to hold the stack
    int *a;

public:
    stack();
    stack(int size);
    void push();
    void pop();
    void display();
    bool isEmpty();
    bool isFull();
};

stack::stack()
{
    top = -1;
    // default size
    size = 10;
    a = new int[size];
}
stack::stack(int size)
{
    top = -1;
    this->size = size;
    a = new int[this->size];
}
bool stack::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
bool stack::isFull()
{
    if (top == this->size - 1)
        return true;
    else
        return false;
}
void stack::push()
{
    if (isFull()) //to check for "overflow" condition
    {
        cout << "Stack Overflow!"
             << "\n";
        /*return; (provide this if you are not using else to tell program to not execeute statements
                   after the if block is complete)*/
    }
    else
    {
        cout << "Enter the element: ";
        cin >> a[++top];
    }
}
void stack::pop()
{
    if (isEmpty()) //to check for "underflow" condition
    {
        cout << "Stack Underflow!"
             << "\n";
    }
    else
        cout << a[top--] << "\n";
}
void stack::display()
{
    if(isEmpty())
        cout << "Stack is Empty\n";
    else
    {
        cout << "Stack\n";
        for (int i = top; i >= 0; i--) //display stack top to bottom
            cout << a[i] << "\n";
    }
    
}