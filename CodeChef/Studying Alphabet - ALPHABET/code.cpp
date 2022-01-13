#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input", "r", stdin);
    string str;
    cin >> str;
    int alphabet[26];
    int len = str.length();
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 0;
    }

    for (int i = 0; i < len; i++)
    {
        alphabet[str[i] - 'a'] = 1;
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        string str1;
        cin >> str1;
        for (int j = 0; j < str1.length(); j++)
        {
            if (alphabet[str1[j] - 'a'] != 1)
            {
                flag = 0;
                continue;
            }
        }
        flag ? cout << "Yes\n" : cout << "No\n";
    }

    return 0;
}
