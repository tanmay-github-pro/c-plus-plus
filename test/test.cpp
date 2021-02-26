#include<iostream>
using namespace std;
void ptr(int *);
int main(){
	cout<<"Hello World,this is a test to write and\n succesfully compile a C++ program"<<endl;
	int t = 10;
	ptr((&t)+1);
}
void ptr(int *p)
{
	cout<<*p;
}
