#include<iostream>
#include<stdio.h>
#include<string.h>
#define cap 100
using namespace std;

// implementing a stack
class Stack
{
    char arr[cap][cap];
    int top;
public:
    Stack()
    {
        // initialise top to -1
        top=-1;
    }
    void push(char a[])
    {
        if(top==cap-1) // check for stack overflow
            cout<<"Stack overflow"<<endl;
        else
            strcpy(arr[++top],a);
    }
    char* pop()//returning char arr pointer(basically to return a string)
    {
        if(top==-1) // check for stack underflow
        {
            cout<<"Stack is empty"<<endl;
        }
        else
            return arr[top--];
    }
};

int main()
{
    Stack s;
    char postfix[100],temp[2],op1[100],op2[100],t[100];
    cout<<"Enter postfix expression"<<endl;
    cin>>postfix;
    for(int i=0;postfix[i]!='\0';i++)
    {
        temp[0]=postfix[i];
        temp[1]='\0';
        //checking for opeartors
        if(postfix[i]=='+' || postfix[i]=='-' || postfix[i]=='*' || postfix[i]=='/' || postfix[i]=='^')
        {
            strcpy(op2,s.pop());
            strcpy(op1,s.pop());
            strcpy(t,"(");
            strcat(t,op1);
            strcat(t,temp);
            strcat(t,op2);
            strcat(t,")");
            s.push(t);
        }
        else
            s.push(temp);//pushing if not opearator
    }
    cout<<"Result: "<<s.pop()<<endl;
    return 0;
}

