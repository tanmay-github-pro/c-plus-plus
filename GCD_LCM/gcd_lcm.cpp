// Calculating GCD and LCM of 2 numbers using Euclidean formula
#include <iostream>
using namespace std;

int gcd(int a, int b);
int lcm(int a, int b, int gcd);

int main()
{
    int a, b;
    cout << "Enter the 2 numbers: ";
    cin >> a >> b;
    int GCD = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << GCD << "\n";
    cout << "LCM of " << a << " and " << b << " is: " << lcm(a, b, GCD) << "\n";
    return 0;
}
int lcm(int a, int b, int gcd)
{
    return (a * b) / gcd;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}
