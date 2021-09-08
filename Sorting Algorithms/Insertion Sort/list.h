#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev, *next;
    node() { prev = next = NULL; }
};

class list
{
private:
public:
    node *head, *tail, *sorted;
    int size;
    list();
    void createList();
    void insert(int x);
    void display(node *head);
    void sort(node *);
    void sortedInsert(node* newnode);
};

list::list()
{
    size = 0;
    head = tail = NULL;
}

void list::createList()
{
    cout << "Enter elements to list (-1 to terminate):\n";
    int x = 0;
    while (x != -1)
    {
        cin >> x;
        if (x != -1)
            insert(x);
    }
}

void list::insert(int x)
{
    node *temp = new node;
    temp->data = x;
    if (!head)
    {
        head = tail = temp;
        tail->prev = head;
        size++;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        size++;
    }
}

void list::display(node *head)
{
    node *curr = head;
    int i = size;
    while (i--)            // while (curr != NULL)
    {
        cout << curr->data << "\t";
        curr = curr->next;
    }
}

void list::sort(node *headref)
{
    // Initialize sorted linked list
    sorted = NULL;
    node* current = headref;
    // Traverse the given linked list and insert every
    // node to sorted
    while (current != NULL) {
        // Store next for next iteration
        node* next = current->next;
        // insert current in sorted linked list
        sortedInsert(current);
        // Update current
        current = next;
    }
    // Update head_ref to point to sorted linked list
    head = sorted;    
    
}

/*
    * function to insert a new_node in a list. Note that
    * this function expects a pointer to head_ref as this
    * can modify the head of the input linked list
    * (similar to push())
    */
void list::sortedInsert(node* newnode)
{
    /* Special case for the head end */
    if (sorted == NULL || sorted->data >= newnode->data) {
        newnode->next = sorted;
        sorted = newnode;
    }
    else {
        node* current = sorted;
        /* Locate the node before the point of insertion
            */
        while (current->next != NULL
                && current->next->data < newnode->data) {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
}
