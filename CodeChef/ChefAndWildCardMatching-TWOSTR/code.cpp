#include <bits/stdc++.h>
using namespace std;

int main()
{
    // strings taken as input
    string str1, str2;
    cin >> str1 >> str2;
    bool flag = true;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i] && str1[i] != '?' && str2[i] != '?')
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
