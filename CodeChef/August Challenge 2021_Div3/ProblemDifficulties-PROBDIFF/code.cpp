#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x;
        unordered_map<int, int> map;
        for (int i = 0; i < 4; i++)
        {
            cin >> x;
            map[x]++;
        }
        if (map.size() == 4 || map.size() == 3)
            cout << "2\n";
        else if (map.size() == 1)
            cout << "0\n";
        else
        {
            for (auto x : map)
            {
                if (x.second % 2 == 0)
                    cout << "2\n";
                else
                    cout << "1\n";
                break;
            }
        }
    }
    return 0;
}
