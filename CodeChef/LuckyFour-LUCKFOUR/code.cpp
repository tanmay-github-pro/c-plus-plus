#include <iostream>
using namespace std;

int main()
{
    int T; // number of test cases
    cin >> T;
    while (T--)
    {
        int x;
        cin >> x;
        int counter = 0;
        while (x != 0)
        {
            if (x % 10 == 4)
                counter++;
            x /= 10;
        }
        cout << counter << "\n";
    }

    return 0;
}