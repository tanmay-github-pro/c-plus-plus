// Check whether a string is a Palindrome using a single stack
#include<iostream>
#include<cstring>
using namespace std;

class palindromeCheck
{
private:
    int top;
    char st[20];
public:
    palindromeCheck();
    void push(char);
    char pop();
    void display();
};

palindromeCheck::palindromeCheck()
{
    top = -1;
}
void palindromeCheck::push(char ch)
{
    if(top == 19) //to check for "overflow" condition
    {
        cout<<"Stack Overflow!"<<endl;
        /*return; (provide this if you are not using else to tell program to not execeute statements
                   after the if block is complete)*/
    }
    else
        st[++top]=ch;
    
}
char palindromeCheck::pop()
{
    if(top == -1) //to check for "underflow" condition
        cout<<"Stack Underflow!";
    else
        return st[top--];
    
}
void palindromeCheck::display()
{
    for(int i = top; i>=0; i--) //display stack top to bottom
    {    
        cout<<st[i]<<endl;
    }
}

int main()
{
    palindromeCheck s;
    char str[20];
    int len, mid, flag=1;
    cout<<"Enter your string: ";
    cin>>str;
    len = strlen(str);
    mid = len/2;  
    if(len%2 == 0)
    {
        for(int i=0; i<mid; i++)
            s.push(str[i]);
        for(int i=0; i<mid; i++){
            int j = i+mid;
            if(str[j] != s.pop())
            {
                flag=0; break;
            }
        }
    }
    else
    {
        for(int i=0; i<mid; i++)
            s.push(str[i]);
        for(int i=0; i<mid; i++){
            int j = i+mid+1;
            if(str[j] != s.pop())
            {
                flag=0; break;
            }
        }
    }
    if(flag==1)
        cout<<"The entered string is a Palindrome"<<endl;
    else
        cout<<"The entered string is not a Palindrome"<<endl;
    
    return 0;
}