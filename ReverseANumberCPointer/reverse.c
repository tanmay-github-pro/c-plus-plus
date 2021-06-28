#include <stdio.h>

int reverse(int *x);
void palindrome(int *x);

int main()
{
    short n; //number of test cases
    scanf("%hi", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        palindrome(&x);
    }

    return 0;
}

int reverse(int *x)
{
    int rev = 0;
    int x_copy = *x;
    while (x_copy != 0)
    {
        int rem = x_copy % 10;
        rev = rev * 10 + rem;
        x_copy = x_copy / 10;
    }
    return rev;
}
void palindrome(int *x)
{
    int n = reverse(x);
    if (n == *x)
        printf("wins\n");
    else
        printf("loses\n");
}