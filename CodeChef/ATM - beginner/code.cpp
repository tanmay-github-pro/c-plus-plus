#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float y;
    cin >> x >> y;
    if (x % 5 == 0 && y >= x + 0.5)
    {
        float k = y - x - 0.5;
        cout << fixed << setprecision(2) << k << endl;
    }
    else
        cout << fixed << setprecision(2) << y << endl;
    return 0;
}