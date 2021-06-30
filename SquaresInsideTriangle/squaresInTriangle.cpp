// Number of squares able to fit inside an Isosceles Right Angled Triangle
#include <iostream>
using namespace std;

void fastIO();
int sum(int *);
int numberOfSquares(int *);
int main()
{
    fastIO();
    int b;
    cout << "Enter size of base of isosceles right angled triangle: ";
    cin >> b;
    cout << "The number of squares (2x2) that can fit are " << numberOfSquares(&b) << "\n";
    return 0;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int numberOfSquares(int *b)
{
    // x>>1 means x/2
    *b = (*b - 2) >> 1;
    return sum(b);
}
int sum(int *n)
{
    return *n * (*n + 1) / 2;
}