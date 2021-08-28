#pragma once
#include <iostream>
#include "node.h"
using namespace std;

class stack
{
private:
    int size;
    int top;
    // array to hold the stack
    // one * because value held will be of type address and the other because stack is dynamically allocated
    node **a;

public:
    stack();
    stack(int size);
    void push(node *);
    void pop();
    void display();
    bool isEmpty();
    bool isFull();
    node *peekTop();
};

stack::stack()
{
    top = -1;
    // default size
    size = 10;
    a = new node *[size];
}
stack::stack(int size)
{
    top = -1;
    this->size = size;
    a = new node *[this->size];
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
void stack::push(node *x)
{
    if (isFull()) //to check for "overflow" condition
        cout << "Stack Overflow!\n";
    /*return; (provide this if you are not using else to tell program to not execeute statements
                   after the if block is complete)*/
    else
        a[++top] = x;
}
void stack::pop()
{
    if (isEmpty()) //to check for "underflow" condition
        cout << "Stack Underflow!\n";
    else
        top--;
}
node *stack::peekTop() {
    return a[top];
}
void stack::display()
{
    if (isEmpty())
        cout << "Stack is Empty\n";
    else
    {
        cout << "Stack\n";
        for (int i = top; i >= 0; i--) //display stack top to bottom
            cout << a[i] << "\n";
    }
}