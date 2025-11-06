#include <stdio.h>


int main() {
    int n, k, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate right (k): ");
    scanf("%d", &k);
    int temp[n];
    k = k % n;
    
    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    
    printf("Array after rotating right by %d positions: \n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
