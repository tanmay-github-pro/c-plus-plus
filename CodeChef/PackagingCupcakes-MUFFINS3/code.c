#include <stdio.h>
#include <math.h>

void main()
{
    unsigned short int n; // number of test cases
    scanf("%hi", &n);
    while (n--)
    {
        int x; // number of cupcakes
        scanf("%d", &x);
        int packageSize = floor((x / 2) + 1);
        printf("%d\n", packageSize);
    }
}