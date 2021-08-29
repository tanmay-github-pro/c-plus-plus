#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int ans;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        a.push_back(ele);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int ele;
        cin >> ele;
        b.push_back(ele);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if((b[0] - a[0] == b[1] - a[1]) || (b[0] - a[0] == b[2] - a[2]))
    {
        ans = b[0] - a[0];
    }
    else if ((b[1] - a[1] == b[2] - a[2]) || (b[1] - a[1] == b[3] - a[3]))
    {
        ans = b[0] - a[0];
    }
    else if ((b[0] - a[1] == b[1] - a[2]) || (b[1] - a[2] == b[3] - a[2]))
    {
        ans = b[0] - a[1];
    }
    cout << ans << "\n";
    

    return 0;
}
