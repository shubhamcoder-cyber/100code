

#include <stdio.h>

int main() {
    int celsius;
    int fahrenheit;

    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;// fahrenheit formula 

    printf("Fahrenheit=%d", fahrenheit);

    return 0;
}