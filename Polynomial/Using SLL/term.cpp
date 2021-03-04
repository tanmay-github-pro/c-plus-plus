/** Creating a polynomial using Singly Linked List
 *  Functions Implemented in polynomial:
 *      addition
 */

#include<iostream>
using namespace std;

class term{
    private:
        int coeff;
        int exp;
        term *next;
    public:
        term* create(term *);
        void display(term *);
};

term* term::create(term *a){
    term *curr = a;
    term *temp = new term;
    cin>>temp->coeff;
    cin>>temp->exp;
    temp->next = NULL;
    if (a == NULL)
        a = temp;
    else {
        while (curr->next!=NULL)
            curr = curr->next;
        curr->next = temp;
    }
    return a;
}
void term::display(term *root){
    term *curr = root;
    if(root == NULL)
        cout<<"NO list";
    else{
        while (curr!=NULL) {
            cout<<curr->coeff<<"x^"<<curr->exp<<" + ";
            curr = curr->next;
        }
        cout<<"0\n";
    }
}
int main() {
    term n, *start=NULL; 
    // variable to store choice of menu driven program
    int x;
    char ch;
    do
    {
        cout<<"1.CreateTerm\t2.Display\n";
        cin>>x;
        switch (x)
        {
        case 1:
            start = n.create(start); break;
        case 2:
            n.display(start); break;
        
        default:
            break;
        }
        cout<<"Do you wish to continue(y/n): ";
        cin>>ch;
    } while (ch!='n');
    return 0;
}