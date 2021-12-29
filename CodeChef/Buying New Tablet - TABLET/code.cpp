#include <bits/stdc++.h>

int main()
{
    using namespace std;

    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // n is number of tablets in the the store, b is budget
    int n, b;
    cin >> n >> b;
    int areaLargest = 0;
    int priceSmallest = INT32_MAX;
    int l, h, price;
    int area = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> h >> price;
        if (price > b)
            continue;
        area = l * h;
        if (area > areaLargest)
            areaLargest = area;
        
    }
    
    if (areaLargest == 0)
        cout << "no tablet\n";
    else
        cout << areaLargest << "\n";

    return 0;
}
