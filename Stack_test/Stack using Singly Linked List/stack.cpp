#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    int x;
    char ch;
    stack s;
    do
    {
        cout << "1. Push\t\t2. Pop\t\t3. Display\n";
        cin >> x;
        int ele;
        switch (x)
        {
        case 1:
            cout << "Enter element to be inserted: ";
            cin >> ele;
            s.push(ele);
            break;
        case 2:
            cout << "Element popped is " << s.peekTop() << "\n";
            s.pop();
            break;
        case 3:
            s.display();
            break;
        default:
            cout << "Wrong Choice\n";
        }
        cout << "Do you wish to continue(y/n): ";
        cin >> ch;
    } while (ch != 'n');

    return 0;
}
