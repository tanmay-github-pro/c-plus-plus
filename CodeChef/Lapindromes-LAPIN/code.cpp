#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    string a, b;
    a = s.substr(0, (len + 1) / 2);
    b = s.substr(len - (len + 1) / 2, (len + 1) / 2);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}