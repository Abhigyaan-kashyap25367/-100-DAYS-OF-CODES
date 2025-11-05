#include <stdio.h>
int main() {
    int n;
    printf("Enter the upper limit: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are: ", n);

    for (int num = 2; num <= n; num++) {
        int isPrime = 1;
        for (int j = 2; j <= num/2 ; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}