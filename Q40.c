#include <stdio.h>

int main() {
    char binaryString[100];
    int i = 0;

    printf("Enter a binary number: ");
    scanf("%s", binaryString);

    while (binaryString[i] != '\0') {
        if (binaryString[i] == '0') {
            binaryString[i] = '1';
        } else {
            binaryString[i] = '0';
        }
        i++;
    }

    printf("The 1's complement is: %s\n", binaryString);

    return 0;
}
