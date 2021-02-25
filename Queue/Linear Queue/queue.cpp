// Implementing a Queue(Linear) using a 1D array ***remember to add brackets when passsing bool function in if condition
// When initialisation of front and rear of queue is "f = 0 and r = -1"
// Condition for Queue to be empty: "f>r" | Condition for Queue to be full: "r == size - 1"
#include<iostream>
using namespace std;
#define size 5

class queueLinear
{
private:
    int f, r; // defining front and rear of the Queue
    int q[size]; // array to store the queue
public:
    queueLinear();
    void enque(int); 
    int deque();
    void display();
    bool isEmpty(); 
    bool isFull();
};

queueLinear::queueLinear()
{
    f = 0; r = -1;
}
void queueLinear::enque(int x)
{
    if(!isFull()) // checking the boolean, proceed only if queue full check is false
        q[++r] = x;
}
int queueLinear::deque()
{
    if(!isEmpty()) // checking the boolean, proceed only if queue empty check is false
        return q[f++];
}
void queueLinear::display()
{
    if(!isEmpty())
        for (int i = f; i <= r; i++)
            cout<<q[i]<<"\t";
    cout<<endl;
}
bool queueLinear::isEmpty()
{
    if(f>r) // condition for Queue to be empty
    {
        cout<<"Queue is Empty!\n";
        return true;
    }
    return false;
}
bool queueLinear::isFull()
{
    if (r == size-1) // condition for Queue to be full
    {
        cout<<"Queue is Full!\n";
        return true;
    }
    return false;
}

int main(){
    queueLinear q;
    int x; int ele;
    char ch;
    do
    {
        cout<<"1.Enque\t 2.Deque\t 3.Display\n";
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