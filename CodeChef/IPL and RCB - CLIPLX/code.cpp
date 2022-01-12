#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        
        // A win is needed only if qualifying points are more than points received from tie scores on all days
        // x cannot be more than twice y because it is given that a win on all days will result in qualification
        // so x-y will give the number of days a win is needed
        cout << max(0, x-y) <<"\n";
    }

    return 0;
}
