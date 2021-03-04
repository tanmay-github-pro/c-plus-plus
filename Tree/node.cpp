// // binary tree creation using left child right child representation
// #include<iostream>
 #include<string.h>

// using namespace std;
// class node
// {
// private:
//     int info;
//     //int level=0;
//     node *lcl, *rcl;
// public:
//     node(/* args */);
//     node *createBT(node *);
//     void display(node *, int);
//     int getLevel();
// };

// node::node(/* args */)
// {
// }

// node* node::createBT(node *root){
//     // used for traversing through tree
//     node *prev, *curr;
//     // char array to store directions given by user
//     char d[10];
//     node *temp = new node;
//     // user input to put inside node->info
//     cout<<"Enter element to be inserted in tree"; //level+=1;
//     cin>>temp->info;
//     // initialising lcl and rcl for temp node to NULL
//     temp->lcl=temp->rcl=NULL;
//     // root == NULL means no tree is created, so make temp as root
//     if (root==NULL)
//         root=temp;
//     else {
//         cout<<"\nGive direction for insertion in tree: ";
//         cin>>d;
//         prev=NULL;
//         curr=root;
//         int i;
//         for (i=0; i<strlen(d); i++){
//             if (curr==NULL)
//                 break;
//             prev=curr;
//             if (d[i]=='L' || d[i]=='l')
//                 curr=curr->lcl;
//             else if (d[i]=='R' || d[i]=='r')
//                 curr=curr->rcl;
//         }
//         if (curr!=NULL || i!=strlen(d)){
//             cout<<"Impossible\n";
//             delete temp;
//             temp = NULL;
//             // check if this is required
//             return root;
//         }
//         if (d[i-1]=='L' || d[i]=='l')
//             prev->lcl=temp;
//         else if (d[i-1]=='R' || d[i]=='r')
//             prev->rcl=temp;
//     }
//     return root;   
// }
// void node::display(node *root, int level){
//     int i;
//     if (root==NULL) return;
//     display(root->rcl, level+1);
//     for (int i = 0; i < level; i++)
//         cout<<" ";
//     cout<<root->info<<endl;
//     display(root->lcl, level+1);
    
// }


// int main(){
//     node n;
//     node *root;
//     char ch;
//     cout<<"Creating a tree:\n";
//     do
//     {
//         root = n.createBT(root);
//         cout<<"Do you want to continue(y/n): ";
//         cin>>ch;
//     } while (ch!='n');
//     cout<<"\nThe tree created is:\n";
//     n.display(root, 0);
//     return 0;
// }

#include<iostream>
#include<stdio.h>

using namespace std;

class node
{
    public:
        int info;
        node *rcl;
        node *lcl;

        node *createBT(node *);
        void display(node*,int);
        void display2(node *);
};

node* node::createBT(node *root){
    node *temp = new node;
    node *curr, *prev;
    char d[20];
    cout<<"Enter info: ";
    cin>>temp->info;
    temp->lcl=temp->rcl=NULL;
    if(root==NULL)
        root = temp;
    else {
        prev = NULL;
        curr = root;
        cout<<"\nGive direction: ";
        cin>>d;
        cout<<strlen(d);
        for (int i=0; i<strlen(d); i++){
            if (d[i]=='l' || d[i]=='L')
                curr = curr->lcl;
            else if (d[i]=='r' || d[i]=='R')
                curr = curr->rcl;
        }
    }
    return root;
}

void node::display2(node *root){
    cout<<root->lcl;
    cout<<root->rcl;
}
void node::display(node *root,int level)
{
    int i;
    if(root==NULL)
        return;
    display(root->rcl,level+1);
    for (int i = 0; i < level; i++)
            cout<<" ";
    cout<<root->info<<endl;
    display(root->lcl,level+1);
}

int main()
{
    node *root=NULL;
    // used to call all methods for tree
    node b;
    // used to switch b/w options
    int c;
    char ch;
    do {
        cout<<"\n1. Insert\t2.Display\n";
        cin>>c;
        switch(c) {
            case 1:root=b.createBT(root);
                break;
            case 2:b.display(root,0);
                break;
        }
        cout<<"Do you wish to continue(y/n): ";
        cin>>ch;
    }while (ch!='n');
    b.display2(root);
    return 0;
}