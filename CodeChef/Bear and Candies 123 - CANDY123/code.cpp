#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    freopen("input", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        int a, b;
        cin >> a >> b;
        int totalCandiesLimak = 0;
        int totalCandiesBob = 0;
        int candies_to_be_eaten_by_Limak = 1;
        int candies_to_be_eaten_by_Bob = 2;
        while (1)
        {
            totalCandiesLimak += candies_to_be_eaten_by_Limak;
            totalCandiesBob += candies_to_be_eaten_by_Bob;
            if (totalCandiesLimak > a)
            {
                flag = 1;
                break;
            }
            if (totalCandiesBob > b)
                break;
            
            candies_to_be_eaten_by_Limak += 2;
            candies_to_be_eaten_by_Bob += 2;
        }
        if (flag == 1)
            cout << "Bob\n";
        else
            cout << "Limaak\n";
    }
    

    return 0;
}
