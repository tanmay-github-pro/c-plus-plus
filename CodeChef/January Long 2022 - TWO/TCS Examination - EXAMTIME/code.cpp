#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        /*  subjects according to index
            0 - DSA
            1 - TOC
            2 - DM
         */

        int scores_dragon[3], scores_sloth[3];
        int dragon_total = 0, sloth_total = 0;

        cin >> scores_dragon[0] >> scores_dragon[1] >> scores_dragon[2];
        cin >> scores_sloth[0] >> scores_sloth[1] >> scores_sloth[2];
        dragon_total = scores_dragon[0] + scores_dragon[1] + scores_dragon[2];
        sloth_total = scores_sloth[0] + scores_sloth[1] + scores_sloth[2];

        if (dragon_total > sloth_total)
            cout << "Dragon\n";
        else if (dragon_total == sloth_total)
        {
            if (scores_dragon[0] > scores_sloth[0])
                cout << "Dragon\n";
            else if (scores_dragon[0] == scores_sloth[0])
            {
                if (scores_dragon[1] > scores_sloth[1])
                    cout << "Dragon\n";
                else if (scores_dragon[1] == scores_sloth[1])
                {
                    cout << "Tie\n";
                }
                else
                    cout << "Sloth\n";
            }
            else
                cout << "Sloth\n";
        }
        else
            cout << "Sloth\n";
    }

    return 0;
}
