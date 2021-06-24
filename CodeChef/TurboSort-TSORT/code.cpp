#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; // number of test cases
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for (auto ele : v)
        cout << ele << "\n";
    return 0;
}
