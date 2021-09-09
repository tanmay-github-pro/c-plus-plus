// Singly linked list by defining nodes using pointers
#include<iostream>
#include "node.h"
using namespace std;

int main()
{
    node n, *start=NULL; 
    // variable to store choice of menu driven program
    int x;
    char ch;
    do
    {
        cout<<"1.InsertEnd  2.InsertBeginning  3.InsertAfter  4.InsertBefore  5.Display\n";
        cin>>x;
        switch (x)
        {
        case 1:
            start = n.insertEnd(start); break;
        case 2:
            start = n.insertBegin(start); break;
        case 3:
            start = n.insertAfter(start); break;
        case 4:
            start = n.insertBefore(start); break;
        case 5:
            n.display(start); break;
        
        default:
            break;
        }
        cout<<"Do you wish to continue(y/n): ";
        cin>>ch;
    } while (ch!='n');
    
    return 0;
}