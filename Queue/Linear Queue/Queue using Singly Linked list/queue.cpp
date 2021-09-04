#include <iostream>
#include "queue.h"
using namespace std;

int main(int argc, char const *argv[])
{
    queue q;
    int x = 0, ele = 0;
    char ch;
    do
    {
        cout<<"1.Enque\t2.Deque\t3.Display\n";
        cin>>x;
        switch(x){
            case 1:
                cout<<"Enter element to be added to queue: "; cin>>ele;
                q.enqueue(ele); break;
            case 2:
                cout<<"Element deleted from the queue is: "<<q.deque()<<"\n"; break;
            case 3:
                q.display(); break;
            default: cout<<"Wrong Choice\n";
        }
        cout<<"Do you wish to continue(y/n): ";
        cin>>ch;
    } while (ch != 'n');

    return 0;
}
