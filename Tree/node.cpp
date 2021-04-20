#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct node {
    int data;
    struct node *left;
    struct node *right;
}node;
node* create(node *root)
{
    int x,w;
   node *t=(node *)malloc(sizeof(node));
   printf("Enter the data:\n");
   scanf("%d",&x);
   t->data=x;
   t->left=NULL;
   t->right=NULL;
   if(root==NULL)
   {
       root=t;
   }
       printf("Press 0 for No and 1 for yes to add left child of %d\n",x);
       scanf("%d",&w);
       if(w>0)
       {
          root->left= create(root->left);
       }
       printf("Press 0 for No and 1 for yes to add right child of %d\n",x);
       scanf("%d",&w);
       if(w>0)
       {
           root->right=create(root->right);
       }

   return root;
}
// void display(node* root)
// {

//    printf("%d ",root->data);
//    while(root->left!=NULL)
//    {
//        display(root->left);
//        break;
//    }
//        while(root->right!=NULL)
//    {
//        display(root->right);
//        break;
//    }


//    return;
// }
void display(node *root, int level){
    int i;
    if (root==NULL) return;
    display(root->left, level+1);
    for (int i = 0; i < level; i++)
        cout<<"    ";
    cout<<root->data<<endl;
    display(root->right, level+1);

}
int main(){
    node *root = NULL;
    root = create(root);
    cout<<endl;
    display(root,0);
}