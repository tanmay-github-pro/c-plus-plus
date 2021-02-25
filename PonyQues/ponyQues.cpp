#include <iostream>
using namespace std;
class ponyQues
{
private:
    int count, len;
public:
    ponyQues(){
        count = 0;
    };
    int solve(int a[], int b){
        len = *(&a + 1) - a;
        for (int i=0; i<len;i++)
            if(a[i]>b)
                count++; 
        return count;
    }
};
int main(){
    ponyQues p;
    int a[5]={4,1,3,5,2};
    int b = 3;
    int x = p.solve(a,b);
    cout<<x;
    return 0;
}