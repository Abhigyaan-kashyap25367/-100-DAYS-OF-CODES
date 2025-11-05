#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, k;
    int areDistinct = 1;
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
        for (k = i + 1; k < n; k++) {
            if (matrix[i][i] == matrix[k][k]) {
                areDistinct = 0;
                break;
            }
        }
        if (areDistinct == 0) break;
    }

    if (areDistinct) {
        printf("The elements on the main diagonal are distinct.\n");
    } else {
        printf("The elements on the main diagonal are NOT distinct.\n");
    }

    return 0;
}