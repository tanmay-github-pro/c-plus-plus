/*  N is number of people 
    ATM machine contains a total of K units of money
 */
#include <iostream>
using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        // check if amount to be withdrawn is not greater than the balance
        if (a[i] <= K)
        {
            K -= a[i];
            a[i] = 1;
        }
        else
            a[i] = 0;
    }
    for (int i = 0; i < N; i++)
        cout << a[i];
    cout << endl;
    return 0;
}
