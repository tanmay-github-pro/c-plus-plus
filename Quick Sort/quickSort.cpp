// Sorting elements in an array using quick sort
#include<iostream>
using namespace std;

// #define arrSize 10
// class quickSort
// {
// private:
//     int a[arrSize];
//     //int low, high, pivot, i ,j; 
//     int i, j, pivot, size;
// public:
//     quickSort();
//     void sort(int a[], int, int, int);
//     void display();
// };

void sort(int a[], int low, int high, int n){
    int i, j;
    int pivot = a[low];
    if (low<high)
    {
        i = low;
        j= high;
        cout<<i<<endl;

        do
        {
            do
            {
                i++;
            } while (a[i]<pivot);
            
            do
            {
                j--;
            } while (a[j]>pivot);
            cout<<i<<j<<endl;
            
            if(i<j){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }            
        } while (i<j);
        
        // change pivot;
        int temp = a[low];
        a[low] = a[j];
        a[j] = temp;

        sort(a, low, j-1, n);
        sort(a, j+1, high, n);
    }   
}


int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter elements in array\n";
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, 0, n, n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<"\t";
    cout<<endl;
    return 0;
}