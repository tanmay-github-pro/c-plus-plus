#include<iostream>
using namespace std;

class sparseMatrix
{
private:
    int r, c, v;
public:
    sparseMatrix();
    void read(sparseMatrix *a);
};

sparseMatrix::sparseMatrix()
{
}
void sparseMatrix::read(sparseMatrix *a)
{
    int m, n, ele;
    cout<<"Enter order of Matrix: ";
    cin>>m>>n;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>ele;
        }
    }
}
int main(){
    sparseMatrix spm[20], a;
}