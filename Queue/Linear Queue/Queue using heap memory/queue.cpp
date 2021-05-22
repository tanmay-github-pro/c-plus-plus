#include<iostream>
#include"queue.h"

using namespace std;

int main(){
    int size;
    int x; int ele;
    char ch;
    cout<<"Enter size of queue: ";
    cin>>size;
    queue q(size);
    
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