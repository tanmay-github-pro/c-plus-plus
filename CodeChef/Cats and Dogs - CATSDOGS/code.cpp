#include <bits/stdc++.h>
using namespace std;

bool isCountCorrect(int, int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, d, l;
        cin >> c >> d >> l;
        isCountCorrect(c, d, l) ? cout << "yes\n" : cout << "no\n";
    }

    return 0;
}

bool isCountCorrect(int c, int d, int l)
{
    if (l % 4 != 0)
        return false;
    int number_of_animals = l / 4;
    int total_number_of_animals = c + d;
    int cats_on_dogs = total_number_of_animals - number_of_animals;
    if (number_of_animals < d)
        return false;

    else if (cats_on_dogs >= 0 && cats_on_dogs <= min(c, 2 * d))
        return true;
    else
        return false;
}
