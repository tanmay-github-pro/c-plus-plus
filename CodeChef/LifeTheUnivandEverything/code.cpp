#include <iostream>
using namespace std;

int main() {
	// your code goes here
	short x;
	do{
	    cin>>x;
	    if(x>99) break;
	    cout<<x<<"\n";
	}while(x!=42);
	return 0;
}
