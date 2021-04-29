// Tree creation using Recursive method
// Inorder, PreOrder and PostOrder traversals
// using recursive methods
// queue.h is user-made header file and implements all queue related functions
#include "queue.h"
#include<iostream>
using namespace std;

class tree{
    public:
        node *root;
        tree(){root=NULL;};
        void createBT();
        void preorder(node *p);
        void postorder(node *p);
        void inorder(node *p);
        void levelorder(node *p);
        void height(node *p);
        void display(node *root, int level);
};

void tree::createBT(){
    // p is to point to addresses that are pulled from queue
    // t is temporary node that has to be added to tree
    node *p, *t;
    int x; //var to store value to be put in node
    Queue q(10); // creating queue by specifying size

    //if(q.isEmpty()){
        cout<<"Enter root value: ";
        cin>>x;
        root = new node;
        root->data = x;
        root->lcl=root->rcl=NULL;
        q.enque(root);
    //}
    while(!q.isEmpty()){
        p = q.deque();
        cout<<"Enter left child of "<<p->data<<": ";
        cin>>x;
        if(x!=-1){
            t = new node;
            t->data = x;
            t->lcl = t->rcl = NULL;
            p->lcl = t;
            q.enque(t);
        }
        cout<<"Enter right child of "<<p->data<<": ";
        cin>>x;
        if(x!=-1){
            t = new node;
            t->data = x;
            t->lcl = t->rcl = NULL;
            p->rcl = t;
            q.enque(t);
        }

    }
}
//inorder traversal
void tree::inorder(node *p)
{
    if(p){
        inorder(p->lcl);
        cout<<p->data;
        inorder(p->rcl);
    }
}

// preorder traversal
void tree::preorder(node *p)
{
    if(p){
        cout<<p->data;
        preorder(p->lcl);
        preorder(p->rcl);
    }
}

// postOrder traversal
void tree::postorder(node *p)
{
    if(p){
        postorder(p->lcl);
        postorder(p->rcl);
        cout<<p->data;
    }
}

// function to display tree
void tree::display(node *root, int level){
    //int i;
    if (root==NULL) return;
    display(root->rcl, level+1);
    for (int i = 0; i < level; i++)
        cout<<"    ";
    cout<<root->data<<endl;
    display(root->lcl, level+1);

}

int main(){
    tree t;
    t.createBT();
    cout<<endl;
    t.display(t.root,0);
    cout<<"\nInorder Traversal:\n";
    t.inorder(t.root);
    cout<<"\nPreOrder Traversal:\n";
    t.preorder(t.root);
    cout<<"\nPostOrder Traversal:\n";
    t.postorder(t.root);
    cout<<endl;
}