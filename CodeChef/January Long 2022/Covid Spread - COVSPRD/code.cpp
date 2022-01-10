#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // taking input from file input
    freopen("input", "r", stdin);

    // number of test cases
    int t;
    cin >> t;
    while (t--)
    {
        // n - Population of ChefLand
        // d - Number of Days
        int n, d;
        cin >> n >> d;
        int no_of_infected_people = 1;

        for (int day_count = 1; day_count <= d; day_count++)
        {
            if (day_count <= 10)
                no_of_infected_people *= 2;
            else
                no_of_infected_people *= 3;
            if (no_of_infected_people > n)
                break;
        }

        cout << min(n, no_of_infected_people) << "\n";
    }

    return 0;
}
