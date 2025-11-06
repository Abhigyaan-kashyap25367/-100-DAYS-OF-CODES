#include <stdio.h>


int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Matrix A: Enter rows and columns (r1 c1): ");
    scanf("%d %d", &r1, &c1);
    printf("Matrix B: Enter rows and columns (r2 c2): ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Error: Matrix multiplication is not possible (c1 != r2).\n");
        return 1;
    }

    int matA[r1][c1];
    int matB[r2][c2];

    printf("Enter elements of Matrix A (%d x %d): \n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Enter elements of Matrix B (%d x %d): \n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matB[i][j]);
        }
    }
    int result[r1][c2];
    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0; 
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    printf("\nResult Matrix (A x B) (%d x %d):\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
