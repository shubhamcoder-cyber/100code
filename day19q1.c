#include <stdio.h>

int main()
{
    int a, b, x, y, rem, gcd, lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while(y != 0)
    {
        rem = x % y;
        x = y;
        y = rem;
    }

    gcd = x;

    lcm = (a * b) / gcd;

    printf("%d", lcm);

    return 0;
}