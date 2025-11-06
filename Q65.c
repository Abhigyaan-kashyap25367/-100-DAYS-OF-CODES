#include <stdio.h>

int main() {
    int n, target, i;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements (MUST BE SORTED, e.g., 5 10 15 20): \n", n);
    for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }

    printf("Enter the target value to search for: ");
    scanf("%d", &target);
    
    int left = 0;
    int right = n - 1;
    int index = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            index = mid;
            break;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {    
            right = mid - 1;
        }
    }
    
    if (index != -1) {
        printf("Result: Element %d found at index %d.\n", target, index);
    } else {
        printf("Result: Element %d not found in the array.\n", target);
    }
    
    return 0;
}
