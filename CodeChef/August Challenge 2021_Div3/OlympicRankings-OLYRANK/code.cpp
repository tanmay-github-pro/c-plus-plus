#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int g1, s1, b1, g2, s2, b2;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        int sum1 = g1 + s1 + b1;
        int sum2 = g2 + s2 + b2;
        if (sum1 > sum2)
            cout << "1\n";
        else
            cout << "2\n";
    }
    return 0;
}
