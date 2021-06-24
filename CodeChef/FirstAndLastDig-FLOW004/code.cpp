#include <iostream>
using namespace std;

int main()
{
    int n; // number of test cases
    cin >> n;
    while (n--)
    {
        int fir, last, num;
        cin >> num;
        last = num % 10;
        while (num/10 != 0)
            num /= 10;
        fir = num;
        cout << fir + last << "\n";
    }
    return 0;
}
