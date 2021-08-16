#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int sptrip = 0;
        for (int C = 1; C <= n; C++)
        {
            for (int B = C; B <= n; B += C)
            {
                if (B % C == 0)
                {
                    for (int A = C; A <= n; A += B)
                    {
                        if (A % B == C)
                        {
                            sptrip++;
                        }
                    }
                }
            }
        }
        cout << sptrip << "\n";
    }
    return 0;
}
