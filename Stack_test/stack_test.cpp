// Program to intialise stacks using arrays
#include<iostream>
using namespace std;

class stack_test
{
private:
    int top;
    int st[5];
public:
    stack_test();
    void push();
    void pop();
    void display();
};

stack_test::stack_test()
{
    top = -1;
}
void stack_test::push()
{
    if(top == 4) //to check for "overflow" condition
    {
        cout<<"Stack Overflow!"<<endl;
        /*return; (provide this if you are not using else to tell program to not execeute statements
                   after the if block is complete)*/
    }
    else
    {
        cout<<"Enter the element: ";
        cin>>st[++top];
    }
    
}
void stack_test::pop()
{
    if(top == -1) //to check for "underflow" condition
    {
        cout<<"Stack Underflow!"<<endl;
    }
    else
        cout<<st[top--]<<endl;
    
}
void stack_test::display()
{
    for(int i = top; i>=0; i--) //display stack top to bottom
    {    
        cout<<st[i]<<endl;
    }
}

int main()
{
    int x; char ch;
    stack_test s;
    do
    {
        cout<<"1. Push \t2. Pop \t3. Display"<<endl;
        cin>>x;
        switch(x){
            case 1: 
                s.push(); break;
            case 2: 
                s.pop(); break;
            case 3: 
                s.display(); break;
            default: cout<<"Wrong Choice"<<endl;
        }
        cout<<"Do you wish to continue(y/n): ";
        cin>>ch;
    } while (ch!='n');
    
    return 0;
}
