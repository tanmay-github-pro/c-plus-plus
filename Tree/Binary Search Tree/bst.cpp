#include "bst.h"

int main()
{
    bst t;
    int key;
    t.createBST();
    t.display(t.getRoot(), 0);
    printf("\n");
    printf("Height of Tree: %d\n\n", t.height(t.getRoot()));
    printf("Inorder Traversal: \n");
    t.inorder(t.getRoot());
    printf("\n");
    // printf("Enter value to be searched(-1 for no search):  ");
    printf("Enter value to be deleted(-1 for no search):  ");
    scanf("%d", &key);
    /* if (key != -1)
    {
        if (t.search(t.getRoot(), key))
            printf("Element found in recursive search\n");
        else
            printf("Element not found in recursive search\n");

        if (t.searchIterative(key))
            printf("Element found in iterative search\n");
        else
            printf("Element not found in iterative search\n");
    } */

    t.rDelete(t.getRoot(), key);
    t.display(t.getRoot(), 0);    

    return 0;
}