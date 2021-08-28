// Tree creation using Recursive method
// Inorder, PreOrder and PostOrder traversals
// using recursive methods
// queue.h is user-made header file and implements all queue related functions
// #include "queue.h"
#include <iostream>
#include "tree.h"
using namespace std;

int main()
{
    tree t;
    t.createBT();
    cout << endl;
    t.display(t.root, 0);
    cout << "\nInorder Traversal:\n";
    t.inorder(t.root);
    cout << "\nPreOrder Traversal:\n";
    t.preorder(t.root);
    cout << "\nPostOrder Traversal:\n";
    t.postorder(t.root);
    cout << "\nInorder Traversal iterative:\n";
    t.inorder_iterative(t.root);
    cout << "\nPreOrder Traversal iterative:\n";
    t.preorder_iterative(t.root);
    cout << "\nPostOrder Traversal iterative:\n";
    t.postorder(t.root);
    cout << "\nLevel Order Traversal:\n";
    t.levelorder(t.root);
    cout << endl;
}