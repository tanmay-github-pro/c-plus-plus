// Implementing a Queue(Linear) using a 1D array ***remember to add brackets when passsing bool function in if condition
// When initialisation of front and rear of queue is "f = 0 and r = -1"
// Condition for Queue to be empty: "f>r" | Condition for Queue to be full: "r == size - 1"
// size of queue can be changed in queue header file (queue.h) located in the same directory
#include<iostream>
#include"queue.h"
using namespace std;

int main(){
    queueLinear q;
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
            default: cout<<"Wrong Choice\n";
        }
        cout<<"Do you wish to continue(y/n): ";
        cin>>ch;
    } while (ch != 'n');
    
    return 0;
}