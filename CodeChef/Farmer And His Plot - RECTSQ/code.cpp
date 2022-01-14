#include <bits/stdc++.h>
using namespace std;

int gcd(int, int);

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
        int n, m;
        cin >> n >> m;
        int side = gcd(n, m);
        int num_of_squares = ((n / side) * (m / side));
        cout << num_of_squares << "\n";
    }
    return 0;
}

int gcd(int a, int b)
{
    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}
