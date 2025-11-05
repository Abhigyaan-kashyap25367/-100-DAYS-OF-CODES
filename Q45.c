#include <stdio.h>

int main() {
    int n;
    double total_sum = 0.0; 

    printf("Enter the number of terms (n): ");
    scanf("%d", &n) ;
    for (int i = 1; i <= n; i++) {
        double numer = 2.0 * i;    
        double denom = 4.0 * i - 1.0;
        double term = numer / denom;
        total_sum += term;
        
        printf("Term %d: %.0lf/%.0lf = %.6lf\n", i, numer, denom, term);
    } 
    printf("\nSum of the series up to %d terms = %.6lf\n", n, total_sum);
    return 0;
}
