#include<iostream>
#include<string.h>
#define capacity 100
using namespace std;

class Stack{//stack class functions
    int top;
    int *prefix;
public:
    Stack()
    {
        top=-1;
        prefix=new int[capacity];
    }
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
            prefix[++top]=item;
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else
            return prefix[top--];
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
                cout<<prefix[i]<<" ";
            cout<<endl;
        }
    }
};

int main()
{
    Stack s;
    char *prefix=new char[100];
    cout<<"Enter prefix expression:"<<endl;
    gets(prefix);
    strrev(prefix);
    int op1,op2,res;
    for(int i=0;prefix[i]!='\0';i++)
    {
        //checking for operands
        if(prefix[i]=='+' || prefix[i]=='-' || prefix[i]=='*' || prefix[i]=='/' || prefix[i]=='^')
        {
            op1=s.pop();
            op2=s.pop();
            switch(prefix[i])
            {
            case '+':
                res=op1+op2;
                break;
            case '-':
                res=op1-op2;
                break;
            case '*':
                res=op1*op2;
                break;
            case '/':
                res=op1/op2;
                break;
            case '^':
                res=op1^op2;
                break;
            default:
                cout<<"invalid"<<endl;
            }
            s.push(res);
        }
        else
            s.push(prefix[i]-'0');//pushing difference of ascii value
    }
    cout<<s.pop()<<endl;
return 0;
}

