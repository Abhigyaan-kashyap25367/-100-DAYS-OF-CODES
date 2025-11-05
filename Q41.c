#include <stdio.h>

int main() {
    int n,last, first;
    int digits = 0;
    int swapped_n;
    int temp;
    int powerOf10 = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        powerOf10 = powerOf10 * 10;
    }

    first = temp;

    int middle = (n % powerOf10) / 10;

    swapped_n = last * powerOf10 + middle * 10 + first;

    printf("The number with swapped digits is: %d\n", swapped_n);

    return 0;
}