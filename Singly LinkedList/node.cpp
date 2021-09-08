// Singly linked list by defining nodes using pointers
#include<iostream>
using namespace std;

class node
{
private:
    int info;
    // simple pointer of type node to store address of a node 
    node *next;
public:
    node();
    node* insertEnd(node *);
    node* insertBegin(node *);
    node* insertAfter(node *);
    node* insertBefore(node *);
    void display(node *);
};
node::node()
{
}
node* node::insertEnd(node *start){
    node *temp = new node;
    // insert information into the info data member of temporary node "temp"
    cin>>temp->info;
    // point next pointer of node temp to NUll
    temp->next = NULL;
    // if no list is present start pointer will be pointing to NULL
    if(start==NULL)
        start=temp; // initialise start pointer to current temporary node
    else{
        // Iterating node
        node *curr = start;
        // check until the next pointer of a node is NULL bcz that will be the last node in the list
        while (curr->next!=NULL)
            curr=curr->next;
        // change next pointer of iterator which is pointing to last node of current list to
        // the address of the new node that has to be appended to the list 
        curr->next=temp;
    }
    // return statement required because start pointer is passed by value(NOT by REFERENCE)
    return start;
}
node* node::insertBegin(node *start)
{
    node *temp = new node;
    cin>>temp->info;
    // remember why temp->next initialisation to NULL is not needed
    temp->next=start;
    // why is check for start == NULL not required here
    start = temp;
    return start;
}
// insert after a node's info value matches key value entered by user
node* node::insertAfter(node *start)
{
    // key is used to check with "info" member of node
    int key;
    // taking key value as input from user
    cout<<"Enter Key Value: ";
    cin>>key;
    // traverse pointer is of type node and is used to traverse through the loop
    // initialise it to start because it will start traversing through the list from the start of list
    node *traverse = start;
    // condition for "info" of a node matching the key
    while(traverse->info!=key)
        traverse=traverse->next;
    node *temp = new node;
    cin>>temp->info;
    // order in which next is changed matters in this method
    // Memory leak problem possibility if proper linking is a specific order is not performed
    temp->next=traverse->next;
    traverse->next=temp;
    return start;
}
node* node::insertBefore(node *start)
{
    node *temp = new node;
    cout<<"Enter info of new node to be entered";
    // insert information into the info data member of temporary node "temp"
    cin>>temp->info;
    // initialise temp->next to NULL
    temp->next=NULL;
    // key is the info member of the node before which new node has to be inserted in the list
    int key; 
    // t1 is a pointer of type node that will be used to traverse through nodes of the list
    node *t1=start, *t2;
    cout<<"Enter Key Value: ";
    cin>>key;
    // check required if the key value matches the first node's info
    // check because otherwise t2 will be pointing at NULL and will result in an error
    if(start->info==key)
    {
        temp->next=start;
        start=temp;
    }
    else
    {
        while(t1->info!=key){
            // point t2 to current t1 before shifting t1 so that there is a reference to the previous node
            t2=t1;
            t1=t1->next;
        }
        // break link and point t2->next to the new node that has to be inserted
        t2->next=temp;
        // point temp->next to t1(node where key value is found)
        temp->next=t1;
    }
    
    return start;
}
void node::display(node *start) 
{
    node *curr = start;
    while (curr != NULL)
    {
        cout << curr->info;
        curr = curr->next;
    }
}

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