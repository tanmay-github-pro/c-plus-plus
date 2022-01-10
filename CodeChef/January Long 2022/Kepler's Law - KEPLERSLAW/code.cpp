#include <bits/stdc++.h>
using namespace std;

int main()
{
    // fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t1, t2, r1, r2;
    cin >> t1 >> t2 >> r1 >> r2;

    if (t1*t1*r2*r2*r2 == t2*t2*r1*r1*r1)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
