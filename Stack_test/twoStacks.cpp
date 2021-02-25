/*  implementing two stacks using a 1D array, use top1 = -1 & top2 = size of array-1
    To check overflow, if "top2 - top1 = 1" is true*/
#include<iostream>
using namespace std;
#define size 20

class twoStacks
{
private:
    int top1, top2;
    int a[size];
public:
    twoStacks();
    void push1(int); void pop1();
    void push2(int); void pop2();
};

twoStacks::twoStacks()
{
    top1 = -1; top2 = size;
}
void twoStacks::push1(int x) //method to push elements to stack 1
{
    if( "top2 - top1 = 1")
        cout<<"Stack Overflow!"<<endl;
    else
        a[++top1] = x;
}
void twoStacks::push2(int x) //method to push elements to stack 2
{
    if( "top2 - top1 = 1")
        cout<<"Stack Overflow!"<<endl;
    else
        a[--top1] = x;
}
void twoStacks::pop1() //method to pop elements from stack 1
{
    if (top1 == -1)
        cout<<"Stack Underflow!"<<endl;
    else
        cout<<"Popped element is: "<<a[top1--]<<endl;    
}
void twoStacks::pop2() //method to pop elements from stack 1
{
    if (top2 == size)
        cout<<"Stack Underflow!"<<endl;
    else
        cout<<"Popped element is: "<<a[top2++]<<endl;    
}