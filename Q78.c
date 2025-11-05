#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    int sum = 0;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the matrix elements (%d x %d): \n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    printf("The sum of the main diagonal elements is: %lld\n", sum);
    return 0;
}