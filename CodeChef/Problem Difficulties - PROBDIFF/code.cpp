#include <bits/stdc++.h>
using namespace std;

int main()
{
    // to store difficulty level of 4 problems
    int a[4];
    map<int, int> x;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        x[a[i]]++;
    }
    if (x.size() == 3 || x.size() == 4)
        cout << "2\n";
    else if (x.size() == 1)
        cout << "0\n";
    // when there is total 2 different difficulty sets
    else
    {
        if (x[a[0]] == 2)   // check for a[1] can also be done
            cout << "2\n";
        else
            cout << "1\n";
    }

    return 0;
}