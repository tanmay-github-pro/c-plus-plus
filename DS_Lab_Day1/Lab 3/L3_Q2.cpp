//Program to find the fast transpose of a matrix using Sparse Row Method
#include<iostream>
#include<stdlib.h>
#define MAX 100
using namespace std;
class sparse{
  public:
  int row,col,val;
};
//method to read sparse matrix
// a is the sparse matrix for the m x n array that will be taken as input by the user
void readsparse(sparse a[], int m, int n)
{
    int i, j, k, item;
    // total number of rows in user input array stored as the first value of row field in sparse matrix
    a[0].row = m;
    // total number of columns in user input array stored as the first value of column field in sparse matrix
    a[0].col = n;
    //k = 1;
    cout<<"\nEnter the elements:\n";
    for(i=0; i<m; i++)
    {
        for(j=0,k=1; j<n; j++,k++)
        {
            cin>>item;
            // condition to check if value entered in matrix is 0 then do nothing
            if(item == 0)
                continue;
            // otherwise update r,c,v values
            // r,c, v values correspond to "row, column and value" values respectively
            // first value for each is the number of rows, columns and non-zero values respectively
            // after that non zero values are stored with the corresponding row and column value
            a[k].row = i;
            a[k].col = j;
            a[k].val = item;
            //k++;
        }
    }
    // total number of non zero values stored at 0th index of value field of sparse matrix
    a[0].val = k-1;
    cout<<"\nThe entered sparse matrix is:\n";
    cout<<"\nRow\tColumn\tValue\n";
    // loop to print out the sparse matrix
    for(int p=0;  p<=a[0].val;  p++)
    {
        cout<<a[p].row<<"\t";
        cout<<a[p].col<<"\t";
        cout<<a[p].val<<"\t";
        cout<<endl;
    }
}

// method to find fast transpose of sparse matrix
// a is the original array that holds the sparse matrix that is input by the user
// b is the array of type sparse used to hold transpose of matrix
void fast_transpose(sparse a[],  sparse b[])
{
    int row_terms[100], start_pos[100];
    int i, j;

    int numTerms = a[0].val;
    int numCols = a[0].col;

    b[0].row = numCols;
    b[0].col = a[0].row;
    b[0].val = numTerms;
    if(numTerms>0)
    {
        for(i =0; i<numCols;  i++)
            row_terms[i] = 0;

        for(i=1; i<=numTerms; i++)
            row_terms[a[i].col]++;

        start_pos[0]=1;

        for(i=1; i<numCols; i++)
            start_pos[i] = start_pos[i-1] + row_terms[i-1];

        for(i=1; i<=numTerms; i++)
        {
            j = start_pos[a[i].col]++;
            b[j].row = a[i].col;
            b[j].col = a[i].row;
            b[j].val = a[i].val;
        }
     }
    cout<<"\nThe Fast Transpose sparse matrix is:\n";
    cout<<"\nRow\tColumn\tValue\n";
    for(int p=0; p<=a[0].val; p++)
    {
        cout<<b[p].row<<"\t";
        cout<<b[p].col<<"\t";
        cout<<b[p].val<<"\t";
        cout<<endl;
    }
}
int main()
{
    int m, n, key;
    sparse a[MAX], b[MAX];
    cout<<"\nEnter the no of rows and columns: ";
    cin>>m>>n;
    readsparse(a, m, n);
    fast_transpose(a, b);
}
