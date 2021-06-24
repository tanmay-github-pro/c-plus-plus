#include <stdio.h>
#include <math.h>

int main(void)
{
    short n;
    scanf("%hi", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        printf("%0.0f\n", round(sqrt(x)));
    }
    return 0;
}
