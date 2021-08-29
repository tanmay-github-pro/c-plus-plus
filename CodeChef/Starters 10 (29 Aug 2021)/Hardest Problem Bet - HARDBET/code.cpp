#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int smallest = INT_MAX;
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            if (a[i] < smallest)
                smallest = a[i];
        }
        smallest == a[0] ? cout << "Draw\n" : smallest == a[1] ? cout << "Bob\n"
                                                               : cout << "Alice\n";
    }
    return 0;
}
