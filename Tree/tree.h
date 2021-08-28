// Tree creation using Recursive method
// Inorder, PreOrder and PostOrder traversals
// using recursive methods
// queue.h is user-made header file and implements all queue related functions
// #pragma once

#include <iostream>
#include "node.h"
#include "queue.h"
#include "stack.h"

using namespace std;

class tree
{
public:
    node *root;
    tree() { root = NULL; };
    void createBT();
    void preorder(node *p);
    void postorder(node *p);
    void inorder(node *p);
    void preorder_iterative(node *p);
    void postorder_iterative(node *p);
    void inorder_iterative(node *p);
    void levelorder(node *p);
    void height(node *p);
    void display(node *root, int level);
};

void tree::createBT()
{
    // p is to point to addresses that are pulled from queue
    // t is temporary node that has to be added to tree
    node *p, *t;
    int x;        //var to store value to be put in node
    Queue qu(10); // creating queue by specifying size

    //if(q.isEmpty()){
    cout << "Enter root value: ";
    cin >> x;
    root = new node;
    root->data = x;
    root->lcl = root->rcl = NULL;
    qu.enque(root);
    //}
    while (!qu.isEmpty())
    {
        p = qu.deque();
        cout << "Enter left child of " << p->data << ": ";
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->data = x;
            t->lcl = t->rcl = NULL;
            p->lcl = t;
            qu.enque(t);
        }
        cout << "Enter right child of " << p->data << ": ";
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->data = x;
            t->lcl = t->rcl = NULL;
            p->rcl = t;
            qu.enque(t);
        }
    }
}
//inorder traversal
void tree::inorder(node *p)
{
    if (p)
    {
        inorder(p->lcl);
        cout << p->data << "  ";
        inorder(p->rcl);
    }
}

// preorder traversal
void tree::preorder(node *p)
{
    if (p)
    {
        cout << p->data << "  ";
        preorder(p->lcl);
        preorder(p->rcl);
    }
}

// postOrder traversal
void tree::postorder(node *p)
{
    if (p)
    {
        postorder(p->lcl);
        postorder(p->rcl);
        cout << p->data << "  ";
    }
}

// function to display tree
void tree::display(node *root, int level)
{
    //int i;
    if (root == NULL)
        return;
    display(root->rcl, level + 1);
    for (int i = 0; i < level; i++)
        cout << "    ";
    cout << root->data << endl;
    display(root->lcl, level + 1);
}

void tree::inorder_iterative(node *p)
{
    stack st;
    // traversal continues until there is no node left and the stack is empty but OR condition is utilised (DON't use AND)
    while (p || !st.isEmpty())
    {
        if (p)
        {
            st.push(p);
            p = p->lcl;
        }
        else
        {
            p = st.peekTop();
            st.pop();
            cout << p->data << "  ";
            p = p->rcl;
        }
    }
}
void tree::preorder_iterative(node *p)
{
    stack st;
    // traversal continues until there is no node left and the stack is empty but OR condition is utilised (DON't use AND)
    while (p || !st.isEmpty())
    {
        if (p)
        {
            cout << p->data << "  ";
            st.push(p);
            p = p->lcl;
        }
        else
        {
            p = st.peekTop();
            st.pop();
            p = p->rcl;
        }
    }
}
void tree::postorder_iterative(node *p)
{
    long int temp;
    stack st;
    // traversal continues until there is no node left and the stack is empty but OR condition is utilised (DON't use AND)
    while (p || !st.isEmpty())
    {
        if (p)
        {
            st.push(p);
            p = p->lcl;
        }
        else
        {
            // temp is used to hold address popped out from the stack
            // negative address is used to move to right child
            // positive address is used to print the node data
            temp = (long int)st.peekTop();
            if (temp >= 0)
            {
                st.push((node *)-temp);
                p = ((node *)temp)->rcl;
            }
            else
            {
                p = ((node *)temp);
                cout << p->data << "  ";
                p = NULL;
            }
            
            st.pop();
            p = p->rcl;
        }
    }
}