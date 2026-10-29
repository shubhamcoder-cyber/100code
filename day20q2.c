#include <stdio.h>

int main()
{
    long long n, temp, divisor = 1;

    scanf("%lld", &n);

    temp = n;

    while(temp >= 10)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    while(divisor > 0)
    {
        int digit = n / divisor;

        if(digit == 0)
            printf("1");
        else
            printf("0");

        n = n % divisor;
        divisor = divisor / 10;
    }

    return 0;
}