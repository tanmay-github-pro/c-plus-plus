#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input", "r", stdin);

    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        for(int i = 1; a < b; i++)
        {
            if(i % 2 != 0)  // odd number
                a += 1;
            else a += 2;
        }
        a == b ? cout << "YES\n" : cout << "NO\n"; 
    }
    
	return 0;
}
