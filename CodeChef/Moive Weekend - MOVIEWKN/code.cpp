#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input", "r", stdin);

    // Number of test cases
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l[n], r[n];
        int movieValue = 0;
        int prod = 0;
        int selectedIndex = 0;
        for (int i = 0; i < n; i++)
            cin >> l[i];
        for (int i = 0; i < n; i++)
            cin >> r[i];
        for (int i = 0, movieValue = l[0] * r[0]; i < n; i++)
        {
            prod = l[i] * r[i];
            if (movieValue < prod)
            {
                movieValue = prod;
                selectedIndex = i;
            }
            else if (movieValue == prod)
            {
                if (r[i] > r[selectedIndex])
                    selectedIndex = i;
                else
                    continue;
            }
        }

        cout << selectedIndex + 1 << "\n";
    }

    return 0;
}
