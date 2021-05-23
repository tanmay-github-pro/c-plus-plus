// Implementing a Queue(Linear) using a pointer to a heap memory location
// ***remember to add brackets when passsing bool function in if condition
// When initialisation of front and rear of queue is "f = 0 and r = -1"
// Condition for Queue to be empty: "f>r" | Condition for Queue to be full: "r == size - 1"
#include<iostream>
using namespace std;

class queue
{
private:
    int f, r;
    int size;
    int *q;
public:
    queue();
    queue(int size);
    void enque(int); 
    int deque();
    void display();
    bool isEmpty(); 
    bool isFull();
};
queue::queue(){
    f=0; r=-1; size =10; q = new int[size];
}
queue::queue(int size){
    f =0; r=-1;
    this->size = size;
    q = new int[this->size]; // or just int[size] // it's basically the same thing
}

void queue::enque(int x)
{
    if(!isFull()) // checking the boolean, proceed only if queue full check is false
        q[++r] = x;
}
int queue::deque()
{
    if(!isEmpty()) // checking the boolean, proceed only if queue empty check is false
        return q[f++]; // f++ used bcz current value of f needs to be returned before it is incremented
    return 0;
}
void queue::display()
{
    if(!isEmpty())
        for (int i = f; i <= r; i++)
            cout<<q[i]<<"\t";
    cout<<endl;
}

bool queue::isEmpty()
{
    if(f>r) // condition for Queue to be empty
    {
        cout<<"Queue is Empty!\n";
        return true;
    }
    return false;
}
bool queue::isFull()
{
    if (r == size-1) // condition for Queue to be full
    {
        cout<<"Queue is Full!\n";
        return true;
    }
    return false;
}