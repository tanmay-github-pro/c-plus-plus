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
        int k;
        cin >> k;
        int ans = 52 % k;
        cout << ans << "\n";
    }

    return 0;
}
