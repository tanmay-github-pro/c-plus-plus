// Implementing a Circular Queue using only 1D array
// size of array used for queue used is 5
#include<iostream>
#include"queueCircular.h"
using namespace std;

int main(){
    queueCircular q;
    int x; int ele;
    char ch;
    do
    {
        cout<<"1.Enque\t2.Deque\t3.Display\n";
        cin>>x;
        switch(x){
            case 1:
                cout<<"Enter element to be added to queue: "; cin>>ele;
                q.enque(ele); break;
            case 2:
                cout<<"Element deleted from the queue is: "<<q.deque()<<"\n"; break;
            case 3:
                cout<<"Elements is the queue are:\n";
                q.display(); break;
        }
        cout<<"Do you wish to continue(y/n): ";
        cout<<"r = "<<q.getr()<<" f = "<<q.getf()<<"\n";
        cin>>ch;
    } while (ch != 'n');
    
    return 0;
}