#include<iostream>
using namespace std;
int main(){
    int a[50]; int n;
    cout<<"How many numbers are to be entered: ";
    cin>>n;
    cout<<"Enter numbers:"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"The Numbers entered are: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Now after sorting the numbers using bubble sort"<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}