#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, p, k;
    cin >> n >> p >> k;
    int p_mod_K = p % k;

    // x is number of days taken by chef for invention
    int x = p_mod_K * (n / k) + min(p_mod_K, n % k) + (p - p_mod_K) / k + 1;

    cout << x << "\n";

    return 0;
}