#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("input", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int total_candies_Bob = 0;
        int total_candies_Limak = 0;
        int candies_to_be_eaten = 1;
        while (1)
        {
            if (candies_to_be_eaten % 2 == 0)
            {
                total_candies_Bob = total_candies_Bob + candies_to_be_eaten;
            }
            else
            {
                total_candies_Limak = total_candies_Limak + candies_to_be_eaten;
            }
            if (total_candies_Limak > a)
            {
                cout << "Bob" << endl;
                break;
            }
            else if (total_candies_Bob > b)
            {
                cout << "Limak" << endl;
                break;
            }
            candies_to_be_eaten++;
        }
    }

    return 0;
}
