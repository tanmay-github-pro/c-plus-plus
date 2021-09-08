#include <iostream>
#include "list.h"
using namespace std;

void insertionSort(int a[], int n);

int main()
{
    /* int n;
    cout << "Enter number of elements to be inserted: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    insertionSort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t"; */
    
    list l;
    l.createList();
    l.display(l.head);
    cout << "\n";
    l.sort(l.head);
    l.display(l.head);
    cout << "\n";

    return 0;
}

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // x = a[i], j = i-1 initialisations
        int x = a[i];
        int j = i - 1;
        while (j > -1 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = x;
    }
}
