#include <iostream>
#include "mergeSort.h"
using namespace std;

void display(int a[], int n);

int main()
{
    int n;
    cout << "Enter number of elements to be inserted: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // mergeSortIterative(a, n);
    // cout << "Elements after sorting Iterative\n";
    // display(a);
    mergeSort(a, 0, n-1);
    cout << "Elements after sorting Recursive\n";
    display(a, n);

    return 0;
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "  ";
    cout << "\n";
}
