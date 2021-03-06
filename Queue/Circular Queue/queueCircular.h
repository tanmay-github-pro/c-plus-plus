// Implementing a Circular Queue using only 1D array
// size of array used for queue used is 5
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
    int getr(){return r;}
    int getf(){return f;}
};

queueCircular::queueCircular()
{
    f = 0; r = -1; count = 0;
}
void queueCircular::enque(int x)
{
    if(!isFull()){
        // r needs to be pre incremented
        // r = (r+1)%size; then use q[r] instead of ++r/size <- this gives some error take care with brackets
        r = (r+1)%size;
        q[r] = x;
        count++;
    }
}
int queueCircular::deque()
{
    int elDel;
    if(!isEmpty())
    {
        elDel=q[f];
        // f also needs to be pre incremented or just use f+1 instead
        f=(++f)%size;
        count--;
        return elDel;
    }
    else return 0; // added line because of warning that control reaches end of non-void function
}
void queueCircular::display()
{
    if(!isEmpty())
    {
        if (r>=f)
        {
            for (int i = f; i <= r; (i++)%size)
            cout<<q[i]<<"\t";
            cout<<endl;
        }
        else
        {
            for (int i = f; i < size; i++)
                cout<<q[i]<<"\t";
 
            for (int i = 0; i <= r; i++)
                cout<<q[i]<<"\t";
            cout<<endl;
        }
        
    }
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