// Implementing a Circular Queue using only 1D array
#include<iostream>
using namespace std;
#define size 5

class queueCircular
{
private:
    int f, r, count;
    int q[size];
public:
    queueCircular();
    void enque(int);
    int deque();
    void display();
    bool isEmpty();
    bool isFull();
};

queueCircular::queueCircular()
{
    f = 0; r = -1; count = 0;
}
void queueCircular::enque(int x)
{
    if(!isFull()){
        q[(r++)%size] = x;
        count++;
    }
}
int queueCircular::deque()
{
    int elDel;
    if(!isEmpty())
    {
        elDel=q[f];
        (f++)%size;
        return elDel;
    }

}
void queueCircular::display()
{
    if(!isEmpty())
        for (int i = f; i <= r; (i++)%size)
            cout<<q[i]<<"\t";
    cout<<endl;
}
bool queueCircular::isEmpty()
{
    if(count == 0){
        cout<<"Queue is Empty!\n";
        return true;
    }
    return false;
}
bool queueCircular::isFull()
{
    if(count == size){
        cout<<"Queue is Full!\n";
        return true;
    }
    return false;
}

int main(){
    queueCircular q;
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
        }
        cout<<"Do you wish to continue(y/n): ";
        cin>>ch;
    } while (ch != 'n');
    
    return 0;
}