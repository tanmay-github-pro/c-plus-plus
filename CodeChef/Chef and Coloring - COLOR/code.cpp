#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char colors[n];
        int number_R = 0;
        int number_G = 0;
        int number_B = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> colors[i];
            if (colors[i] == 'R')
                number_R++;
            else if (colors[i] == 'G')
                number_G++;
            else if (colors[i] == 'B')
                number_B++;
        }

        int max_color = max(number_R, max(number_G, number_B));
        cout << n - max_color << "\n";
    }

    return 0;
}
