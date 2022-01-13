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
        int n;
        cin >> n;
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int type;
            cin >> type;
            freq[type]++;
        }
        for (auto x : freq)
        {
            int key = x.first;
            int value = x.second;
            if (value % 2 != 0)
            {
                cout << key << "\n";
                break;
            }
        }
    }

    return 0;
}
