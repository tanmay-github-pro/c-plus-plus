#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, x, y, z;
    cin >> d >> x >> y >> z;
    int workMax = max(7 * x, y * d + z * (7 - d));
    cout << workMax << "\n";
    return 0;
}
