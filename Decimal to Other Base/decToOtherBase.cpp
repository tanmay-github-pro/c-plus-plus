#include<iostream>
using namespace std;

class decToOtherBase
{
private:
    int decNumber, quotient, remainder, newNum, newBase;
public:
    decToOtherBase(/* args */);
    int getDecNum();
    int getNewBase();
    int computeNewNum();
    void displayAll();
};

decToOtherBase::decToOtherBase(/* args */)
{
    getDecNum();
    getNewBase();
    newNum = 0;
    quotient = decNumber;
}

int decToOtherBase::getDecNum(){
    cout<<"Enter decimal Number: ";
    cin>>decNumber;
}
int decToOtherBase::getNewBase(){
    cout<<"Enter new Base: ";
    cin>>newBase;
}
int decToOtherBase::computeNewNum(){
    
    while(quotient>0){
        remainder = quotient%newBase;
        quotient = quotient/newBase;
        newNum = newNum*10 + remainder;
    }
}
void decToOtherBase::displayAll(){
    cout<<"Decimal Number: "<<decNumber<<"\n";
    cout<<"New Base: "<<newBase<<"\n";
    cout<<"New Number: "<<newNum<<"\n";
}

int main(){
    decToOtherBase dec;
    dec.computeNewNum();
    dec.displayAll();
}