// Sorting elements in an array using quick sort
#include <iostream>
#include "quickSort.h"
using namespace std;

void display(int a[], int n);

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "\nEnter elements in array\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quickSort(a, 0, n - 1);
    cout << "\nElements in sorted order are:\n";
    display(a, n);
    return 0;
}