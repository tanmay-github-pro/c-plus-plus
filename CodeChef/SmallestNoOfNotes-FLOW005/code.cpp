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
        if (x >= 100)
        {
            while (x >= 100)
            {
                x -= 100;
                count++;
            }
        }
        if (x >= 50)
        {
            while (x >= 50)
            {
                x -= 50;
                count++;
            }
        }
        if (x >= 10)
        {
            while (x >= 10)
            {
                x -= 10;
                count++;
            }
        }
        if (x >= 5)
        {
            while (x >= 5)
            {
                x -= 5;
                count++;
            }
        }
        if (x >= 2)
        {
            while (x >= 2)
            {
                x -= 2;
                count++;
            }
        }
        if (x >= 1)
        {
            while (x >= 1)
            {
                x -= 1;
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}
