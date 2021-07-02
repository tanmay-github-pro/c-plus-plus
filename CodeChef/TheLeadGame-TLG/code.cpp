#include <iostream>
using namespace std;

int diff(int score1, int score2);
int max(int *a, int *b);
int main()
{
    int score1 = 0, score2 = 0; // to hold cumulative scores at end of each round
    int leadMax = 0, leadMaxi = 0;
    int n; // number of rounds
    cin >> n;
    int lead;
    int win[n];
    for (int i = 0; i < n; i++)
    {
        int x, y;   // hold current scores in each round as entered by the user
        cin >> x >> y;
        // updating scores to cumulative scores
        score1 += x;
        score2 += y;
        // lead at end of every round
        lead = abs(score1 - score2);
        if (leadMax == 0)
            leadMax = lead;
        else
        {
            leadMax = max(&leadMax, &lead);
            if (leadMax == lead)
                leadMaxi = i; // to keep track of rounds
        }
        if (score1 - score2 < 0)
            win[i] = 2;
        else
            win[i] = 1;
    }
    cout << win[leadMaxi] << " " << leadMax << "\n";
    return 0;
}
int diff(int score1, int score2)
{
    if (score1 > score2)
        return score1 - score2;
    else
        return score2 - score1;
}
int max(int *a, int *b)
{
    if (*a > *b)
    {
        return *a;
    }
    else
        return *b;
}
