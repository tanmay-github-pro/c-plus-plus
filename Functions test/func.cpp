// this file tests multiple functions as part of a homework question dated 21/8/2020
// functions tested are:
/*  factorial of a number,
    reverse of a number
    check whether number is a palindrome
    generate fibonacci series for a given limit 'n'
    check whether a number is prime
    generate prime series using the function written for prime check, for a given limit
*/
#include<iostream>
using namespace std;

int factorial(int x);
int reverse(int x);
void palindrome(int x);
void fibonacci(int x);

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of number is: "<<factorial(n)<<endl;
    cout<<"Reverse of number is: "<<reverse(n)<<endl;
    fibonacci(n);
}

int factorial(int x)
{
    int r = 1;
    if (x>1)
    r = x * factorial(x-1);
    else r=1;
    return r;
}
int reverse(int x)
{
    int rev = 0;
    while (x!=0)
    {
        int rem = x%10;
        rev = rev*10 + rem;
        x = x/10;
    }
    return rev;
}
void palindrome(int x)
{
    int n = reverse(x);
    if(n==x)
        cout<<"The number "<<x<<" is a palindrome";
    else
        cout<<"The number "<<x<<" is not a palindrome";
}
void fibonacci(int x)
{
    int a = 0; int b = 1; int nxt = 0;
    cout<<"Fibonacci series up to "<<x<<" is: "<<a,b;
    nxt = a + b;
    while (nxt<x)
    {
        cout<<nxt;
        a = b;
        b = nxt;
        nxt = a + b;
    }
    cout<<endl;
}