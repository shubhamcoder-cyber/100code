#include <stdio.h>

int main()
{
    int a, b, rem;

    scanf("%d %d", &a, &b);

    while(b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }

    printf("%d", a);

    return 0;
}