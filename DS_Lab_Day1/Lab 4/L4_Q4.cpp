
#include<string.h>
#include<iostream>
using namespace std;

class Stack{//creating stack class
    int top;
    char *infix;
    int capacity;
public:
    Stack(int capacity)
    {
        top=-1;
        this->capacity=capacity;
        infix=new char[capacity];
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
            infix[++top]=item;
    }
    char pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return '\0';
        }
        else
            return infix[top--];
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
                cout<<infix[i]<<" ";
            cout<<endl;
        }
    }
};

int prec(char a)//code to check precedence
{
    if(a=='+' || a=='-')
        return 1;
    if(a=='*' || a=='/')
        return 2;
    if(a=='^')
        return 3;
    return 0;
}

int main()
{
    char *infix=new char[100];
    cout<<"Enter infix expression: "<<endl;
    gets(infix);
    strrev(infix);//reversing the string
    char *output=new char[100];
    int j=0,e;
    Stack s(100);
    for(int i=0;infix[i]!='\0';i++)
    {
        if(infix[i]==')')
            s.push(infix[i]);
        //checking for operator
        else if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='^')
        {
            if(s.isEmpty())
                s.push(infix[i]);
            else
            {
                int e=s.pop();
                while(prec(infix[i])<prec(e))
                {
                    output[j++]=e;
                    if(s.isEmpty())
                        break;
                    else
                        e=s.pop();
                }
                if(prec(infix[i])>prec(e))
                    s.push(e);
                s.push(infix[i]);
            }
        }
        else if(infix[i]=='(')
        {
            e=s.pop();
            while(e!=')')
            {
                output[j++]=e;
                e=s.pop();
            }
        }
        else
            output[j++]=infix[i];

    }
    while(!s.isEmpty())//run till the stack becomes empty
        output[j++]=s.pop();
    strrev(output);
    cout<<"Prefix expression is: "<<endl;
    puts(output);
    return 0;
}
