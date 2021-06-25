#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short int n; // number of test cases
    cin >> n;
    while (n--)
    {
        int x; // number of cupcakes
        cin >> x;
        int packageSize = floor((x / 2) + 1);
        cout << packageSize << "\n";
    }

    return 0;
}