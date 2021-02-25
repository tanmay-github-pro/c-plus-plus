#include<iostream>
#include<stdio.h>
using namespace std;
int convertedNumber[100];
class Stack{
 public:
 int arr[100];
 int top,capacity;
 // implementationi of stack
 Stack(int c)
 {
     capacity = c;
     top = -1;
 }
 void push(int  ele)
 {
     if(top == capacity -1 )
        return;
     top++;
     arr[top] = ele;
 }
 int pop()
 {
     if(top == -1)
        return -1;
     else
     {
         top--;
         return arr[top+1];
     }
 }
 int topEle()
 {
     if(top == -1)
        return -1;
     else
        return arr[top];
 }
 int size()
 {
     return top+1;
 }
};
// function to convert decimal number to a number with given base
void convert(int base,int number)
{
    Stack st(100);
    int rem;
    // check whether number is zero until then keep doing the steps in loop
    while(number != 0)
    {
        // rem will give the digits of new number starting from right
        rem = number%base;
        // push the digits of new number into stack
        st.push(rem);
        // remove last digit of number
        number=number/base;
    }
    int i=0;
    while(st.size()!=0)
    {
        // pop out the converted number 
        convertedNumber[i] = st.pop();
        i++;
    }
    convertedNumber[i] = 999;

}
int main()
{
    int decNumber,base;
    cout<<"Enter decimal number: ";
    cin>>decNumber;
    cout<<"Enter Base: ";
    cin>>base;
    cout<<"Converted Number is: \n";
    convert(base,decNumber);
    for(int i =0;convertedNumber[i]!= 999;i++)
    cout<<convertedNumber[i]<<" ";
    cout<<endl;
}
