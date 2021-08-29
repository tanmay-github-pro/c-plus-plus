#include <iostream>
using namespace std;

int sumNoddIntegers(int n);

int main()
{
    int n, k, s;
    cin >> n >> k >> s;
    int answer = (s - sumNoddIntegers(n)) / (k - 1);
    cout << answer << "\n";

    return 0;
}

int sumNoddIntegers(int n)
{
    return n * n;
}