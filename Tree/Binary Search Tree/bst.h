// Binary Search Tree creation, search, and insert
// -1 to terminate binary tree creation

#include <iostream>
#include "node.h"

using namespace std;

class bst
{
private:
    node *root;

public:
    bst();
    void createBST();
    node *getRoot();
    int height(node *p);
    void insert(int key);
    void inorder(node *p);
    void display(node *p, int level);
};

bst::bst()
{
    root = NULL;
}

node *bst::getRoot()
{
    return this->root;
}

int bst::height(node *p)
{
    if (!p)
        return 0;
    if (height(p->lcl) > height(p->rcl))
        return height(p->lcl) + 1;
    else
        return height(p->lcl) + 1;
}

void bst::createBST()
{
    int x;
    while (x != -1)
    {
        cin >> x;
        if (x != -1)
            this->insert(x);
    }
}

void bst::insert(int key)
{
    node *t = this->root;
    // r will point to parent of t
    // p will be used to create a new node
    node *r = NULL, *p;

    // if root is not present
    if (!this->root)
    {
        p = new node;
        p->data = key;
        p->lcl = p->rcl = NULL;
        this->root = p;
        return;
    }
    while (t)
    {
        r = t;
        if (key > t->data)
            t = t->rcl;
        else if (key < t->data)
            t = t->lcl;
        else
            return;
    }
    p = new node;
    p->data = key;
    p->lcl = p->rcl = NULL;

    if (key < r->data)
        r->lcl = p;
    else
        r->rcl = p;
}

// Recursive Inorder function
void bst::inorder(node *p)
{
    if (p)
    {
        inorder(p->lcl);
        cout << p->data << "\t";
        inorder(p->rcl);
    }
}

void bst::display(node *root, int level)
{
    // if root == NULL
    if (!root)
        return;
    display(root->rcl, level + 1);
    for (int i = 0; i < level; i++)
        cout << "    ";
    cout << root->data << "\n";
    display(root->lcl, level + 1);
}