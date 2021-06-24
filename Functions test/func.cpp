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

// MAX is used for size of array which will hold the factorial output
// 100! has 158 digits so MAX is defined as 160
#define MAX 160
 
int multiply(int x, int res[], int res_size);
void factorial(int x);
int reverse(int x);
void palindrome(int x);
void fibonacci(int x);

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    factorial (n);
    cout<<"Reverse of number is: "<<reverse(n)<<endl;
    fibonacci(n);
}
// this factorial function cannot calculate factorial of large number like 100
// int factorial(int x)
// {
//     int r = 1;
//     if (x>1)
//     r = x * factorial(x-1);
//     else r=1;
//     return r;
// }


 
// This function finds factorial of large numbers
// and prints them
void factorial (int n)
{
    int res[MAX];
 
    // Initialize result
    res[0] = 1;
    int res_size = 1;
 
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
 
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
    cout << endl;
}
 
// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function may value of res_size and returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry
 
    // One by one multiply n with individual digits of res[]
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
 
        // Store last digit of 'prod' in res[] 
        res[i] = prod % 10; 
 
        // Put rest in carry
        carry  = prod/10;   
    }
 
    // Put carry in res and increase result size
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
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