// Sum of two complex numbers where complex numbers are objects
//Sum returned as an object
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
    Complex sum(Complex);
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
Complex Complex::sum(Complex B){
    Complex temp;
    temp.real = real + B.real;
    temp.img = img + B.img;
    return temp;
}
int main(){
    Complex X,Y,Z;
    X.getData();
    Y.getData();
    Z = X.sum(Y);
    cout<<"Sum of the two numbers is: ";Z.putData();

    return 0;
}