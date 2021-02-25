// Swapping two numbers using a swap function using pointers
#include<iostream>
using namespace std;

void swap(int *, int *);
int main(){
    int a, b;
    cout<<"Enter a: "; cin>>a;
    cout<<"a = "<<a<<"\n";
    cout<<"Enter b: "; cin>>b;
    cout<<"b = "<<b<<"\n";
    cout<<"After swapping\n";
    swap(&a, &b);
    cout<<"a = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";
}
void swap(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}