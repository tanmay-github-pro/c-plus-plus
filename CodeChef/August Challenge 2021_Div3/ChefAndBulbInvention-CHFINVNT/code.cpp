// #include <bits/stdc++.h>
// using namespace std;

// void sortInPair(vector<int> &A, vector<int> &P);

// int main()
// {
//     int n, p, k;
//     int count = 0;
//     cin >> n >> p >> k;
//     int final = p % k;
//     vector<int> a;
//     vector<int> b;
//     for (int i = 0; i < n; i++)
//     {
//         a.push_back(i % k);
//         b.push_back(i);
//     }
//     sortInPair(a, b);
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == final && b[i] == p)
//         {
//             count = i;
//             break;
//         }
//     }
//     // Debugging
//     /* cout << "RemArr\n";
//     for(auto x: a) cout << x << "\t";
//     cout << "\n";
//     cout << "pArray\n";
//     for(auto x: b) cout << x << "\t";
//     cout << "\n"; */

//     // because indices are assigned to count which start from 0
//     // but day numbers start from 1
//     cout << ++count << "\n";

//     return 0;
// }

// // Function to sort character array b[]
// // according to the order defined by a[]
// void sortInPair(vector<int> &a, vector<int> &b)
// {
//     int n = a.size(); // size of both A and P is same
//     pair<int, char> pairedArr[n];

//     // Store in pairs.
//     for (int i = 0; i < n; i++)
//     {
//         pairedArr[i].first = a[i];
//         pairedArr[i].second = b[i];
//     }

//     // Sorting the pair array.
//     sort(pairedArr, pairedArr + n);

//     // Modifying original arrays
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = pairedArr[i].first;
//         b[i] = pairedArr[i].second;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long

void sortInPair(vector<int> &A, vector<int> &P);

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, k;
        int count = 0;
        cin >> n >> p >> k;
        int final = p % k;
        final--;

        int s = ((n - 1) / k) * k;
        s = n - 1 - s;

        if (final > s)
        {
            count += (s + 1) * ((n - 1) / k + 1) + (final - s) * ((n - 1) / k);
        }
        else
        {
            count += ((n - 1) / k + 1) * (final + 1);
        }

        for (int i = final + 1; i <= n - 1; i += k)
        {
            count++;
            if (i == p)
            {
                cout << count << endl;
                // goto cvv;
                break;
            }
        }
    }

    return 0;
}