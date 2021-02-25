#include<iostream>
#include<ctype.h>

using namespace std;
//implementing a stack
class Stack{
    int top;
    int *arr;
    int capacity;
public:
    Stack(int capacity)
    {
        // initialise top to -1
        top=-1;
        this->capacity=capacity;
        arr=new int[capacity];
    }
    // check for stack underflow
    bool isEmpty()
    {
        if(top==-1)
            return true;
        return false;
    }
    void push(int item)
    {
        if(top==capacity-1)
            cout<<"Stack overflow"<<endl;
        else
            arr[++top]=item;
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return '\0';
        }
        else
            return arr[top--];
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        else
        {
            for(int i=0;i<=top;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
};
int main()
{
    Stack s(100);
    // holds postfix expression to be evaluated
    char *postfix=new char[100];
    cout<<"Enter postfix expression"<<endl;
    cin>>postfix;
    fflush(stdin);
    int op1,op2,output=0;
    for(int i=0;postfix[i]!='\0';i++)
    {
        //checking operators
        if(postfix[i]=='+' || postfix[i]=='-' || postfix[i]=='*' || postfix[i]=='/' || postfix[i]=='^')
        {
            op2=s.pop();
            op1=s.pop();
            switch(postfix[i])
            {
            case '+':
                output=op1+op2;
                break;
            case '-':
                output=op1-op2;
                break;
            case '*':
                output=op1*op2;
                break;
            case '/':
                output=op1/op2;
                break;
            case '^':
                output=op1^op2;
                break;
            default:
                cout<<"Invalid"<<endl;
            }
            s.push(output);
        }
        else
            s.push((int)postfix[i]-(int)'0');
    }
    cout<<s.pop()<<endl;
    return 0;
}