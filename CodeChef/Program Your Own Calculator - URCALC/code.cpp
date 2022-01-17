#include <bits/stdc++.h>

int main()
{
    double a, b;
    char op;
    scanf("%lf\n", &a);
    scanf("%lf\n", &b);
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        printf("%f", a + b);
        break;
    case '-':
        printf("%f", a - b);
        break;
    case '*':
        printf("%f", a * b);
        break;
    case '/':
        printf("%f", a / b);
        break;
    }

    return 0;
}
