#include<iostream>

using namespace std;
// implementation of a stack
class Stack{
    int top;
    char *infix;
    int capacity;
public:
    Stack(int capacity)
    {
        // initialise top to -1
        top=-1;
        this->capacity=capacity;
        infix=new char[capacity];
    }
    // check for whethe stack is empty
    bool isEmpty()
    {
        if(top==-1)
            return true;
        return false;
    }
    void push(int item)
    {
        // check if stack is full
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

//precedence check of an operator
int prec(char a)
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
    cin>>infix;
    char *output=new char[100];
    int j=0,e;
    Stack s(100);
    for(int i=0;infix[i]!='\0';i++)
    {
        if(infix[i]=='(')
            s.push(infix[i]);
        //check for operator
        else if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='^')
        {
            if(s.isEmpty())
                s.push(infix[i]);
            else
            {
                int e=s.pop();
                while(prec(infix[i])<=prec(e))
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
        else if(infix[i]==')')
        {
            e=s.pop();
            while(e!='(')
            {
                output[j++]=e;
                e=s.pop();
            }
        }
        else
            output[j++]=infix[i];

    }
    //remaining things in stack
    while(!s.isEmpty())
        output[j++]=s.pop();
    cout<<"Postfix expression is: "<<endl;
    puts(output);
    return 0;
}

