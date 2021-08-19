#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n;
    int result;
    cin >> a >> b >> n;
    if (n % 2 != 0)
        a *= 2;
    result = max(a, b) / min(a, b);
    cout << result << "\n";

    return 0;
}
