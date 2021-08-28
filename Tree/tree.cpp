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
    cout << "\n";
    t.display(t.root, 0);
    cout << "\n";
    cout << "Number of Nodes in tree: " << t.noOfNodes(t.root) << "\n";
    cout << "Number of Degree 2 nodes in tree: " << t.countDeg2(t.root) << "\n";
    cout << "Number of Degree 1 nodes in tree: " << t.countDeg1(t.root) << "\n";
    cout << "Number of Leaf Nodes in tree: " << t.countLeafNodes(t.root) << "\n";
    cout << "Height of tree: " << t.height(t.root) << "\n";
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
    cout << "\n";
}