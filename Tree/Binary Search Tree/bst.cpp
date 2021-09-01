#include"bst.h"

int main()
{
    bst t;
    t.createBST();
    // t.insert(30);
    // t.insert(15);
    // t.insert(50);
    // t.insert(20);
    // t.insert(40);
    // t.insert(60);
    // t.insert(10);
    // t.insert(9);
    t.display(t.getRoot(), 0);
    printf("\n");
    printf("Height of Tree: %d\n\n", t.height(t.getRoot()));
    printf("Inorder Traversal: \n");
    t.inorder(t.getRoot());
    printf("\n");

    return 0;
}