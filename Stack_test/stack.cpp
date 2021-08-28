#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    int x;
    char ch;
    int size;
    cout << "Enter size of stack: ";
    cin >> size;
    stack s(size);
    do
    {
        cout << "1. Push\t\t2. Pop\t\t3. Display\n";
        cin >> x;
        switch (x)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        default:
            cout << "Wrong Choice"
                 << "\n";
        }
        cout << "Do you wish to continue(y/n): ";
        cin >> ch;
    } while (ch != 'n');

    return 0;
}
