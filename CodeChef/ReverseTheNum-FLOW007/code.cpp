#include <iostream>
using namespace std;

int main()
{
    unsigned short int n; // number of test cases
    cin >> n;
    while (n--)
    {
        int x; // number whose reverse has to be calculated
        cin >> x;
        int rev = 0;
        while (x != 0)
        {
            rev = 10 * rev + x % 10;
            x /= 10;
        }
        cout << rev << "\n";
    }
    return 0;
}
