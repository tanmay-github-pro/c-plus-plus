#include<iostream>
using namespace std;

int main(){
    int a[50]; int n; int sum=0;
    float avg;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter numbers: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    avg = sum/n;
    cout<<"The average of numbers is "<<avg<<endl;
}