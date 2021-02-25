/*  Implementing multiple stacks within a 1D array where all the stacks are of the same size
    User chooses number of divisions i.e. number of stacks to be made in the 1D array and can perform
    menu based operations on the stacks*/
#include<iostream>
using namespace std;
#define size 20
class stacksMultiple
{
private:
    int boundary[size], top[size], a[size];
public:
    stacksMultiple(int);
    void push(int, int);
    void pop(int);
    bool checkOverFlow(int);
    bool checkUnderFlow(int);
    void display(int);
};

stacksMultiple::stacksMultiple(int n) //n is number of divisions in stack
{
    int i;
    for(i=0; i<n; i++){
        boundary[i] = top[i] = (size/n)*i-1; /* defining the boundary of each stack and 
                                                the top pointer for each stack*/
    }boundary[i] = size - 1;
}
void stacksMultiple::push(int i, int x) // "i" is used to specify stacks and "x" is the element to be inserted
{  
    if(!checkOverFlow(i)) //checking the boolean, proceed only if overflow check is false
        a[++top[i]] = x; 
}
void stacksMultiple::pop(int i) // "i" is used to specify stacks
{
    if (!checkUnderFlow(i)) //checking the boolean, proceed only if underflow check is false
        cout<<"The popped element is: "<<a[top[i]--]<<endl;
}
bool stacksMultiple::checkOverFlow(int i)
{
    if(top[i]==boundary[i+1] || top[i] == size-1) //check stack overflow condition
    {
        cout<<"Stack Overflow!"<<endl;
        return true;
    }
    return false;
}
bool stacksMultiple::checkUnderFlow(int i){
    if(top[i] == boundary[i]) // check stack underflow condition
    {
        cout<<"Stack Underflow!"<<endl;
        return true;
    }
    return false;
}
void stacksMultiple::display(int i){
    for(int x = top[i]; x>boundary[i]/*or boundary[i]+1*/; x--) // printing elements in the reverse order of input
        cout<<a[x]<<endl; 
}

int main()
{
    int x; char ch; int n;
    int ele;
    int stackNo;
    cout<<"Enter number of stacks: "; cin>>n;
    stacksMultiple s(n);
    do
    {
        cout<<"1. Push \t2. Pop \t3. Display"<<endl;
        cin>>x;
        switch(x){
            case 1:
                cout<<"which stack do you want to push to: "; cin>>stackNo;
                cout<<"Enter the element: "; cin>>ele;
                s.push(stackNo-1, ele); break;
            case 2: 
                cout<<"Remove element from which stack: "; cin>>stackNo;
                s.pop(stackNo-1); break;
            case 3: 
                cout<<"Which stack do you want to display: "; cin>>stackNo;
                s.display(stackNo-1); break;
            default: cout<<"Wrong Choice"<<endl;
        }
        cout<<"Do you wish to continue(y/n): ";
        cin>>ch;
    } while (ch!='n');

    return 0;
}