#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, q;
        int even = 0, odd = 0;
        int numTuples = 0;
        cin >> n >> q;
        int v[n+1];
        v[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            int ele;
            cin >> ele;
            if (ele % 2 == 0)
                v[i] = (v[i - 1] + 1);
            else
                v[i] = (v[i - 1]);
        }
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            even = v[r] - v[(l - 1)];
            odd = (r - l + 1) - even;
            // evenC3 is used both as combination and final answer for all 3 even
            int evenC3 = (even * (even-1) * (even-2))/6;
            int oddC2 = (odd * (odd-1))/2;
            
            numTuples = evenC3 + (oddC2 * even);
            cout << numTuples << "\n";
        }
    }

    return 0;
}