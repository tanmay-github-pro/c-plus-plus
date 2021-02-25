// binary tree creation using left child right child representation
#include<iostream>
#include<string.h>

using namespace std;
class node
{
private:
    int info;
    node *lcl, *rcl;
public:
    node(/* args */);
    node *createBT(node *);
};

node::node(/* args */)
{
}
node* node::createBT(node *root){
    // used for traversing through tree
    node *prev, *curr;
    // char array to store directions given by user
    char d[10];
    node *temp = new node;
    // user input to put inside node->info
    cout<<"Enter element to be inserted in tree";
    cin>>temp->info;
    // initialising lcl and rcl for temp node to NULL
    temp->lcl=temp->rcl=NULL;
    if (root==NULL)
        root=temp;
    else {
        cout<<"\nGive direction for insertion in tree: ";
        cin>>d;
        prev=NULL;
        curr=root;
        for (int i=0; i<strlen(d); i++){
            if (curr==NULL)
                break;
            prev=curr;
            if (d[i]=='L' || d[i]=='l')
                curr=curr->lcl;
            else if (d[i]=='R' || d[i]=='r')
                curr=curr->rcl;
        }
        if (curr!=NULL || i!=strlen(d)){
            cout<<"Impossible\n";
            delete temp;
            temp = NULL;
            // check if this is required
            return root;
        }
        if (d[i-1]=='L' || d[i]=='l')
            prev->lcl=temp;
        else if (d[i-1]=='R' || d[i]=='r')
            prev->rcl=temp;
    }

    return root;
    
}


int main(){
    return 0;
}