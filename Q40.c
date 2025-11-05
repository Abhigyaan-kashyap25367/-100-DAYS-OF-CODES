#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main() {
    char binary_num[MAX_LENGTH];
    char ones_complement[MAX_LENGTH];
    int length;
    int success = 1; 

    printf("--- 1's Complement Finder ---\n");
    printf("Enter a binary number (up to %d bits): ", MAX_LENGTH - 1);

    if (fgets(binary_num, MAX_LENGTH, stdin) == NULL) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }

    
    binary_num[strcspn(binary_num, "\n")] = 0;

    length = strlen(binary_num);

    if (length == 0) {
        printf("No input provided.\n");
        return 0;
    }

    if (length >= MAX_LENGTH) {
        fprintf(stderr, "Error: Binary number exceeds maximum length of %d.\n", MAX_LENGTH);
        return 1;
    }

    
    for (int i = 0; i < length; i++) {
        char bit = binary_num[i];

        if (bit != '0' && bit != '1') {
            fprintf(stderr, "Error: Invalid character '%c' detected. Input must be binary.\n", bit);
            success = 0;
            break; 
        }

        if (bit == '0') {
            ones_complement[i] = '1';
        } else {
            ones_complement[i] = '0';
        }
    }

    if (success) {
        
        ones_complement[length] = '\0';
        
        printf("\nOriginal Binary: %s\n", binary_num);
        printf("1's Complement:  %s\n", ones_complement);
    } else {
        return 1;
    }

    return 0;
}
