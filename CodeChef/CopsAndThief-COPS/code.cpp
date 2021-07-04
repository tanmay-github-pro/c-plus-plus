/*  M houses (out of 100 contain cops) who run at a 
    max speed of x houses per minute in a straight line and will search for max y min
    M space seperated integers as input which indicate which house numbers the cops are currently present in
 */
#include <iostream>
using namespace std;

int main(void)
{
    int M, x, y;
    int counter = 0;
    cin >> M >> x >> y;
    int a[101], location[M];
    for (int i = 0; i < M; i++)
    {
        cin >> location[i];
    }
    fill(a, a+101, 0);
    for (int i = 0; i < M; i++)
    {
        for (int j = location[i]; (j <= location[i] + x * y) && j <= 100; j++) a[j] = 1;
        for (int j = location[i]; (j >= location[i] - x * y) && j >= 1; j--) a[j] = 1;
    }
    for (int i = 1; i<=100; i++)
        if (a[i]==0)
            counter++;
    
    cout << counter << "\n";

    return 0;
}
