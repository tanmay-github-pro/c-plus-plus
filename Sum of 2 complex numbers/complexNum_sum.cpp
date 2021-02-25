// Sum of two complex numbers where complex numbers are objects
//no object returned
#include<iostream>
using namespace std;

class Complex
{
private:
    float real;
    float img;
public:
    void getData();
    void putData();
    void sum(Complex, Complex);
};
void Complex::getData(){
    cout<<"Enter real part of number:";
    cin>>real;
    cout<<"Enter imaginary part of number:";
    cin>>img;
}
void Complex::putData(){
    if(img>=0)
        cout<<real<<"+"<<img<<"i"<<endl;
    else
        cout<<real<<img<<"i"<<endl;
}
void Complex::sum(Complex A, Complex B){
    real = A.real + B.real;
    img = A.img + B.img;
}
int main(){
    Complex X,Y,Z;
    X.getData();
    Y.getData();
    Z.sum(X,Y);
    cout<<"Sum of the two numbers is: ";Z.putData();

    return 0;
}