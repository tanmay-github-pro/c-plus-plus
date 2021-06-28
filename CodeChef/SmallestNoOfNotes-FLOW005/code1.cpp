#include <iostream>
using namespace std;

int main()
{
    unsigned short n; // number of test cases
    cin >> n;
    while (n--)
    {
        int x, count = 0;
        cin >> x;
        int a[6] = {1, 2, 5, 10, 50, 100};
        for (int i = 5; i >= 0, x - a[i] > 0;)
        {
            if (x < a[i])
                i--;
            else
            {
                x -= a[i];
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}
