#include <iostream>
using namespace std;

int noOfDig(int x);

int main()
{
    int A, B;
    cin >> A >> B;
    int sum = A + B;
    int totalNoOfDig = 0;
    while (sum != 0)
    {
        int rem = sum % 10;
        sum /= 10;
        totalNoOfDig += noOfDig(rem);
    }
    cout << totalNoOfDig << "\n";
    
    return 0;
}

int noOfDig(int x)
{
    int ans;
    switch (x)
    {
    case 0:
        ans = 6;
        break;
    case 1:
        ans = 2;
        break;
    case 2:
        ans = 5;
        break;
    case 3:
        ans = 5;
        break;
    case 4:
        ans = 4;
        break;
    case 5:
        ans = 5;
        break;
    case 6:
        ans = 6;
        break;
    case 7:
        ans = 3;
        break;
    case 8:
        ans = 7;
        break;
    case 9:
        ans = 6;
        break;
    }
    return ans;
}