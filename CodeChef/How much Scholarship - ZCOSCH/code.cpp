#include <iostream>
using namespace std;

int main()
{
    // r is for rank of individual
    int r;
    cin >> r;
    if (r<=100)
    {
        if (r<=50)
            cout << "100\n";
        else
            cout << "50\n";
    }
    else
        cout << "0\n";    

    return 0;
}
