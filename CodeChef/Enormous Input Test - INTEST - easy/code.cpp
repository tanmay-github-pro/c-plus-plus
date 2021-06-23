#include <bits/stdc++.h>
using namespace std;

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// taken from submission id 48070874

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; // n lines of input, check divisibility by check
    int counter = 0;
    cin >> n >> k;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % k == 0)
            counter++;
    }
    cout << counter << "\n";
    return 0;
}