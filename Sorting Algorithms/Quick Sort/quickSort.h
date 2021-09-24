#include <iostream>
using namespace std;

int partition(int a[], int l, int r);
void quickSort(int a[], int l, int r);
void swap(int *a, int *b);

/**
 * Function will return updated position of pivot so that partitions can be made 
 * and quick sort will be performed on them
 */
/*
int partition(int a[], int l, int r)
{
    // last element of array is taken to be pivot
    int pivot = a[r];
    // i will point to last number which is smaller than pivot
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}
*/

// this also works (self written code)
int partition(int a[], int l, int r)
{
    // Last element in array is taken as pivot
    int pivot = a[r];
    /**
     * i looks for elements Greater in value than the pivot element
     * j looks for elements Smaller in value than the pivot element
    */
    int i = l-1, j = r;
    do
    {
        do
        {
            i++;
        } while (a[i] < pivot);
        do
        {
            j--;
        } while (a[j] > pivot && j != -1);
        if(i < j)
            swap(a[i], a[j]);
    } while (i < j);
    swap(a[j+1], a[r]);
    
    // j will stop at a value that will be the last smaller value than pivot
    return j+1;    
}

// This function to partition array takes the first element as pivot
/* int partition(int a[], int l, int r){
	int pivot = a[l];
    // i looks for elements Greater in value than the pivot element
    // j looks for elements Smaller in value than the pivot element
	int i = l, j = r+1;
	do{
		do{i++;}while(a[i] < pivot);
		do{j--;}while(a[j] > pivot);
		if(i < j)
			swap(a[i], a[j]);
	}while(i < j);
	swap (a[j], a[l]);
	return j;
}
 */
void quickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(a, l, r);
        quickSort(a, l, pi - 1);
        quickSort(a, pi + 1, r);
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
       cout << a[i] << "\t";
    cout << "\n";    
}

void swap (int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
