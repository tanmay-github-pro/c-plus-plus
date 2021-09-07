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
    node *getRoot();
    int height(node *p);
    void createBST();
    node *search(node *t, int key);
    node *searchIterative(int key);
    void insert(int key);
    node *insertRecursive(node *p, int key);
    node *findInorderPredecessor(node *p);
    node *findInorderSuccessor(node *p);
    node *rDelete(node *p, int key);
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
        return -1;
    /* if (height(p->lcl) > height(p->rcl))
        return height(p->lcl) + 1;
    else
        return height(p->lcl) + 1; */
    return (max(height(p->lcl), height(p->rcl)) +1);
}

// Recursive function to search for an element in BST
node *bst::search(node *t, int key)
{
    // if t == NULL
    if (!t)
        return NULL;
    else if (key == t->data)
        return t;
    else if (key < t->data)
        return search(t->lcl, key);
    else
        return search(t->rcl, key);
}

// Iterative function to search for an element in BST
node *bst::searchIterative(int key)
{
    node *t = this->root;
    while (t)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->lcl;
        else
            t = t->rcl;
    }
    return NULL;
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

// Function(iterative) to Insert elements into BST
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

// Function(iterative) to Insert elements into BST
node *bst::insertRecursive(node *p, int key)
{
    // temporary node to append to tree later
    node *t;
    // if p == NULL
    if (!p)
    {
        t = new node;
        t->data = key;
        t->lcl = t->rcl = NULL;
        return t;
    }
    if (key < t->data)
        p->lcl = insertRecursive(p->lcl, key);
    else
        p->rcl = insertRecursive(p->rcl, key);

    return p;
}

// Function (recursive) to find inorder predecessor
// Inorder Predecessor - rightmost child of left subtree
node *bst::findInorderPredecessor(node *p)
{
    while (p && p->rcl != NULL)
        p = p->rcl;
    return p;
}

// Function (recursive) to find inorder successor
// Inorder Successor - leftmost child of right subtree
node *bst::findInorderSuccessor(node *p)
{
    while (p && p->lcl != NULL)
        p = p->lcl;
    return p;
}

// Function (recursive) to delete an element from BST
node *bst::rDelete(node *p, int key)
{
    // if p == NULL
    if (!p)
        return NULL;
    // if p is a leaf node
    if (!p->lcl && !p->rcl)
    {
        if (p == root)
            root = NULL;
        // free() can also be used
        delete (p);
        return NULL;
    }
    // search for element in BST
    if (key < p->data)
        p->lcl = rDelete(p->lcl, key);
    else if (key > p->data)
        p->rcl = rDelete(p->rcl, key);
    else
    {
        node *q;
        // node to be deleted from whichever subtree has greater height
        if (height(p->lcl) > height(p->rcl))
        {
            q = findInorderPredecessor(p->lcl);
            p->data = q->data;
            p->lcl = rDelete(p->lcl, q->data);
        }
        else
        {
            q = findInorderSuccessor(p->rcl);
            p->data = q->data;
            p->rcl = rDelete(p->rcl, q->data);
        }
    }
    return p;
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