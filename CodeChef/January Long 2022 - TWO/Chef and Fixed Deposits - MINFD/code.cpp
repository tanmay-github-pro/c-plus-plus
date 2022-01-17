#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("input", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        int sum = 0;
        int num_of_broken_fd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum < x)
        {
            cout << "-1\n";
            continue;
        }
        else
        {
            sort(a, a + n);
            for (int i = n - 1; x > 0; i--)
            {
                x -= a[i];
                num_of_broken_fd++;
            }
        }

        cout << num_of_broken_fd << "\n";

    }

    return 0;
}
