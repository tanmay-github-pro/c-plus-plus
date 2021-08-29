#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    int sum = 0;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        if (ele > 0)
            sum += ele;
        v.push_back(ele);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < k; i++)
    {
        if(v[i]<0)
            sum -= v[i];
    }
    cout << sum << "\n";

    return 0;
}