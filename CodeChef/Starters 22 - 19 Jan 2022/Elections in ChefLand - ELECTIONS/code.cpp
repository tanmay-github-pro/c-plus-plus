#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        int votesA, votesB, votesC;
        cin >> votesA >> votesB >> votesC;

        if (votesA > 50)
            cout << "A\n";
        else if (votesB > 50)
            cout << "B\n";
        else if (votesC > 50)
            cout << "C\n";
        else
            cout << "NOTA\n";
    }

    return 0;
}
