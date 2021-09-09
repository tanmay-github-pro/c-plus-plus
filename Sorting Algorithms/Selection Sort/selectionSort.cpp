#include <iostream>
using namespace std;

void swap(int *a, int *b);
void selectionSort(int a[], int n);
void display(int a[], int n);

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Elements entered (unsorted): \n";
    display(a, n);
    selectionSort(a, n);
    cout << "Elements after sorting:\n";
    display(a, n);

    return 0;
}

void selectionSort(int a[], int n)
{
    // i < n-1 because last element will be sorted automatically when n-1 elements are sorted
    for (int i = 0; i < n - 1; i++)
    {
        // j will iterate through the whole array and update k if needed
        // k will point to smallest element
        int j, k;
        for (j = k = i; j < n; j++)
        {
            if (a[j] < a[k])
                k = j;
        }

        if (i != k)
            swap(&a[i], &a[k]);
    }
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
    cout << "\n";
}
